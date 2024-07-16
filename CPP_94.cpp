#include <iostream>
#include <vector>
#include <string>

std::string f(std::vector<int> v) {
    std::string s = "";
    for (int i : v) {
        if (i >= 128)
            s += "1";
        else
            s += (char)(i); 
    }
    return s;
}

int main() {
    std::vector<int> v; 
    v.push_back(127);
    v.push_back(97);
    v.push_back(8192);
    if(v.empty()) {
        std::cout << "Error: The vector is empty." << std::endl;
    } else {
        std::cout << f(v) << std::endl;
    }
    return 0;
}