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