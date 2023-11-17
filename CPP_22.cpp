
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values)
{
    vector<int> v;
    for(auto &val:values)
    {
        try
        {
            v.push_back(boost::any_cast<int>(val));
        }
        catch(const boost::bad_any_cast &)
        {
            continue;
        }
    }
    return v;
}
int main()
{
    list_any ls={1,2,3,"abc",{},{}};
    auto v=filter_integers(ls);
    for(auto &i:v)
        cout<<i<<endl;
}
