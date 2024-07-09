#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <bits/stl_pair.h>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i].size() != b[i].size()) 
            return false;
    return true;
}

std::vector<int> by_length(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int num : arr) {
        int length = to_string(num).size();
        result.push_back(length);
    }
    return result;
}

int main() {
    // User input
    std::vector<int> intArray = {};
    std::cout << "Enter the numbers separated by space: ";
    for (std::string str; std::getline(std::cin, str); ) {
        intArray.push_back(stoi(str));
    }
    
    std::vector<int> lengthArr = by_length(intArray);
    // Test assertion
    assert(issame({to_string(9).size(), to_string(4).size(), to_string(8).size()}, vector<string>(lengthArr.begin(), lengthArr.end())));
    return 0;
}