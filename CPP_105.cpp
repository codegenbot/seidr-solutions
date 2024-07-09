#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int numArray[] = {9, 4, 8};
    std::vector<std::string> stringArray = {"Nine", "Four", "Eight"};
    std::vector<std::string> by_length;
    for (int i = 0; i < sizeof(numArray) / sizeof(numArray[0]); i++) {
        if (numArray[i] == 9) by_length.push_back("Nine");
        else if (numArray[i] == 4) by_length.push_back("Four");
        else by_length.push_back("Eight");
    }

    assert(issame(std::vector<std::string>(by_length.begin(), by_length.end()), stringArray));
    return 0;
}