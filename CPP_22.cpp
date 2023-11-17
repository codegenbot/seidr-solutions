#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
  vector<int> result;
  for (auto i = values.begin(); i != values.end(); ++i) {
    if (i->type() == typeid(int)) {
      result.push_back(boost::any_cast<int>(*i));
    }
  }
  return result;
}
