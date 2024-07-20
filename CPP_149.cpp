#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const std::string& s) { return s.length() % 2 != 0; }),
      lst.end());

    // Sort the vector based on length and then alphabetically
    std::sort(lst.begin(), lst.end(),
      [](const std::string& a, const std::string& b) {
          if (a.length() == b.length()) {
              return a < b;
          }
          return a.length() < b.length();
      });

    return lst;
}

int main() {
    // Your code here
    return 0;
}