#include <vector>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

bool issame(vector<int> a, vector<int> b){
   // implementation of issame function
}

vector<int> filter_integers(list<any> values){
   vector<int> result;
   for(auto value : values){
      if(auto* intValue = any_cast<int>(&value)){
         result.push_back(*intValue);
      }
   }
   return result;
}

int main(){
   assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
   return 0;
}