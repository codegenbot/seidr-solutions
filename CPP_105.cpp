```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(to_string(i));
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (string s : temp) {
        if (s == "1") 
            result.push_back("One");
        else if (s == "2")
            result.push_back("Two");
        else if (s == "3")
            result.push_back("Three");
        else if (s == "4")
            result.push_back("Four");
        else if (s == "5")
            result.push_back("Five");
        else if (s == "6")
            result.push_back("Six");
        else if (s == "7")
            result.push_back("Seven");
        else if (s == "8")
            result.push_back("Eight");
        else
            result.push_back("Nine");
    }
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    std::cout << "Success!" << std::endl;
    return 0;
}