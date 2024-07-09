#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a) {
    if (a.size() == 1) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] != a[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(std::to_string(i)); 
        }
    }

    std::sort(temp.begin(), temp.end());
    std::reverse(temp.begin(), temp.end());

    std::vector<std::string> result;
    for (std::string str : temp) {
        switch (stoi(str)) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 4, 8};
    std::vector<std::string> output = by_length(input);
    
    if (issame({{"One", "Four", "Eight"}})) {
        for (std::string str : output) {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << "Output is incorrect." << std::endl;
    }

    return 0;
}