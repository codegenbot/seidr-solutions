```cpp
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
    std::vector<int> intArray(std::begin(numArray), std::end(numArray));
    std::vector<std::string> stringArray;

    for (int i = 0; i < intArray.size(); i++) {
        if (intArray[i] == 9) stringArray.push_back("Nine");
        else if (intArray[i] == 4) stringArray.push_back("Four");
        else if (intArray[i] == 8) stringArray.push_back("Eight");
    }

    std::vector<std::string> strArr = {"Nine", "Four", "Eight"};
    assert(issame(stringArray, strArr));
    return 0;
}