#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(int n, const std::vector<std::string>& strVec) {
    int count = std::count_if(strVec.begin(), strVec.end(),
                              [n](const std::string& str) {
                                  return std::count_if(str.begin(), str.end(), 
                                                      [](char c) {
                                                          return c >= '0' && c <= '9';
                                                      }) == n;
                              });

    return count == n;
}

int odd_count(const std::vector<std::string>& strVec) {
    int oddCount = 0;
    for (const std::string& str : strVec) {
        oddCount += std::count_if(str.begin(), str.end(),
                                  [](char c) {
                                      return (c >= '0' && c <= '9') && (c - '0') % 2 == 1;
                                  });
    }
    
    return oddCount;
}

int main() {
    assert(issame(3, {"abc", "def", "ghi", "123", "456"}));
    assert(issame(odd_count({"271", "137", "314"}), { "true" });
    
    return 0;
}