#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
#include <cassert>

int odd_count(const std::initializer_list<std::string>& strings){
    int count = 0;
    for (const auto& str : strings){
      for (char c : str){
        if (c >= '0' && c <= '9' && (c - '0') % 2 != 0){
          count++;
        }
      }
    }
    return count;
}

bool issame(int result, const std::initializer_list<std::string>& expected_output){
    if (result != expected_output.size()) return false;
    
    int i = 0;
    for (const auto& str : expected_output){
        if (str.find(std::to_string(result)) == std::string::npos){
            return false;
        }
    }
    return true;
}

void test_issame(){
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 3 in the string 314 of the input."
    }));
}

int main(){
    test_issame();
    return 0;
}