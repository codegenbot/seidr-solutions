#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int numArray[] = {9, 4, 8};
    std::vector<int> intArray(numArray, numArray + sizeof(numArray) / sizeof(numArray[0]));
    std::vector<std::string> stringArray;

    for (auto i : intArray) {
        if (i == 9) stringArray.push_back("Nine");
        else if (i == 4) stringArray.push_back("Four");
        else if (i == 8) stringArray.push_back("Eight");
    }

    assert(issame({std::to_string(i) for i in intArray}, vector<string>(stringArray.begin(), stringArray.end())));
    return 0;
}