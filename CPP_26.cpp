#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
   if (a.size() != b.size()) {
       return false;
   }
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   for (int i = 0; i < a.size(); i++) {
       if (a[i] != b[i]) {
           return false;
       }
   }
   return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
   assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
   return 0;
}