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

std::vector<std::string> by_length(int* array, int n) {
    std::vector<std::string> result;
    for (int i = 0; i < n; i++) {
        if (array[i] == 9) result.push_back("Nine");
        else if (array[i] == 4) result.push_back("Four");
        else if (array[i] == 8) result.push_back("Eight");
    }
    return result;
}

int main() {
    int numArray[] = {9, 4, 8};
    std::vector<int> intArray(numArray, numArray + sizeof(numArray) / sizeof(numArray[0]));
    std::vector<std::string> stringArray = by_length(numArray, sizeof(numArray) / sizeof(numArray[0]));

    assert(issame({std::to_string(i) for i in intArray}, stringArray));
    return 0;
}