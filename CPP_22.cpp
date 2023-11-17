/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#//include<boost/any.hpp>
#include<list>





//typedef std::list<boost::any> list_any;
//defining type any
class any
{
public:
    // constructors
    any() : content(0)
    {
    }

    template <typename ValueType>
    any(const ValueType& value) : content(new holder<ValueType>(value))
    {
    }

    // copy-construction
    any(const any& other) : content(other.content ? other.content->clone() : 0)
    {
    }

    // copy-assignment
    any& swap(any& rhs)
    {
        std::swap(content, rhs.content);
        return *this;
    }

    // value access
    template <typename ValueType>
    ValueType* any_cast()
    {
        if (typeid(ValueType) != this->type()) return 0;
        return &static_cast<any::holder<ValueType>*>(this->content)->held;
    }

    template <typename ValueType>
    ValueType* any_cast() const
    {
        return const_cast<any*>(this)->any_cast<ValueType>();
    }

    // type access
    const std::type_info& type() const
    {
        return content ? content->type() : typeid(void);
    }

private:
    // data holder for any
    class placeholder
    {
    public:
        placeholder() {}

        virtual ~placeholder() {}

        virtual const std::type_info& type() const = 0;

        virtual placeholder* clone() const = 0;
    };

    // data holder template for any
    template <typename ValueType>
    class holder : public placeholder
    {
    public:
        holder(const ValueType& value) : held(value) {}

        virtual const std::type_info& type() const
        {
            return typeid(ValueType);
        }

        virtual placeholder* clone() const
        {
            return new holder(held);
        }

        ValueType held;
    };

    placeholder* content; // A pointer
};
typedef list<any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> output;
    for(auto i:values){
        if(i.type()==typeid(int)){
            output.push_back(boost::any_cast<int>(i));
        }
    }
    return output;
}
int main(){
    list_any values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back("abc");
    values.push_back(vector<int>());
    values.push_back(list_any());
    vector<int> output = filter_integers(values);
    for(auto i:output){
        cout<<i<<" ";
    }
    return 0;
}
