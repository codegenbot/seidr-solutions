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
    if(i->type()==typeid(int)){
      v.push_back(boost::any_cast<int>(*i));
    }
  }
  return v;
}

int main(){
  list_any l;
  l.push_back(1);
  l.push_back(2);
  l.push_back("abc");
  l.push_back(3.14);
  vector<int> v=filter_integers(l);
  for(auto i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
  }
  return 0;
}
