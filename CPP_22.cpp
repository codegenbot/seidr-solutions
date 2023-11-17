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
 for(auto i=values.begin();i!=values.end();i++){
  try{
   v.push_back(boost::any_cast<int>(*i));
  }
  catch(boost::bad_any_cast &e){
  }
 }
 return v;
}
int main(){
 list_any values;
 values.push_back(1);
 values.push_back(2);
 values.push_back(3);
 values.push_back("abc");
 values.push_back({});
 values.push_back({});
 vector<int> v=filter_integers(values);
 for(auto i=v.begin();i!=v.end();i++){
  cout<<*i<<" ";
 }
 return 0;
}
