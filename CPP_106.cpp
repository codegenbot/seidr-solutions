#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> f(int size) {
   std::vector<int> result(size);
   for (int i = 0; i < size; ++i) {
       result[i] = i + 1;
   }
   return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
   return a == b;
}

int main() {
   assert(issame(f(3), {1, 2, 3}));
}