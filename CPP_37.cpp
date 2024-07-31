#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b); // Function declaration

void sort_even(const std::vector<float>& l);

bool issame(std::vector<float> a, std::vector<float> b) {
   for(size_t i=0; i<a.size(); i++){
       if(a[i] != b[i]){
           return false;
       }
   }
   return true;
}

void sort_even(const std::vector<float>& l) {
   std::vector<float> even_elems;
   for(size_t i=0; i<l.size(); i++){
       if(i%2 == 0){
           even_elems.push_back(l[i]);
       }
   }
   std::sort(even_elems.begin(), even_elems.end());
   
   std::vector<float> result;
   int j = 0;
   for(size_t i=0; i<l.size(); i++){
       if(i%2 == 0){
           result.push_back(even_elems[j]);
           j++;
       } else {
           result.push_back(l[i]);
       }
   }

   // Return result if needed; Or modify the provided vector directly
}

int main() {
   std::vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
   std::vector<float> expected = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
   
   sort_even(input);
   
   assert(issame(input, expected));
   
   return 0;
}