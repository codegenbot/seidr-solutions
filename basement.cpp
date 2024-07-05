#include <iostream>
#include <vector>
int basement(std::vector<int>& v) {
   int i = 0;
   int sum = 0;
   for (size_t i = 0; i < v.size(); i++) {
       if (sum + v[i] < 0) {
           return i; // return the first index that satisfies the condition
       }
       sum += v[i];
   }
   return -1; // return -1 if no negative sum found
}
int main() {
   std::vector<int> vec = {1, 2, 3, 4, 5};
   int index = basement(vec);
   if (index != -1) {
       std::cout << "First negative sum index: " << index << std::endl;
   } else {
       std::cout << "No negative sum found." << std::endl;
   }
   return 0;
}