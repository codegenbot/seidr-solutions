#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
  return a == b;
}

vector<int> filter_integers(list<boost::any> values);

int main() {
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {4, 5, 6};
  
  assert(issame(filter_integers({1, "abc", 2.0, 3}), v1));
  assert(issame(filter_integers({4, "def", 5.0, 6}), v2));
  
  return 0;
}

vector<int> filter_integers(list<boost::any> values) {
  vector<int> result;
  
  for(auto value : values){
    if(typeid(value) == typeid(int)){
      result.push_back(boost::any_cast<int>(value));
    }
  }
  
  return result;
}