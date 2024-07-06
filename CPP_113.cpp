#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    int count = 0;
    std::cout << "Enter the strings (each line is a string, press Enter after the last one):" << std::endl;
    for (std::string s; std::getline(std::cin, s); ) {
        count = 0;
        for (char c : s) {
            if (c % 2 != 0) {
                count++;
            }
        }
        std::string temp = "the number of odd elements ";
        temp += std::to_string(count);
        temp += " in the string.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    std::vector<std::string> lst;
    std::cout << "Enter the strings (each line is a string, press Enter after the last one):" << std::endl;
    for (std::string s; std::getline(std::cin, s); ) {
        lst.push_back(s);
    }
    std::vector<std::string> result = odd_count(lst);
    std::cout << "The number of odd elements in each string:" << std::endl;
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}