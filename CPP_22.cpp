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
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> v;
    for(auto it=values.begin();it!=values.end();it++)
    {
        try
        {
            if(it->type()==typeid(int))
            {
                v.push_back(boost::any_cast<int>(*it));
            }
        }
        catch(boost::bad_any_cast& e)
        {
            cout<<e.what()<<endl;
        }
    }
    return v;
}
int main()
{
    list_any l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back("abc");
    vector<int> v=filter_integers(l);
    cout<<"Filtered Integers are:"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}
