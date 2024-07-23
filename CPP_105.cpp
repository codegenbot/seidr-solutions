#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

namespace {

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<string> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(to_string(i));
        }
    }

    sort(numArr.begin(), numArr.end());

    reverse(numArr.begin(), numArr.end());

    std::vector<string> result;
    for (string str : numArr) {
        if (str == "One") {
            str = "One";
        } else if (str == "Two") {
            str = "Two";
        } else if (str == "Three") {
            str = "Three";
        } else if (str == "Four") {
            str = "Four";
        } else if (str == "Five") {
            str = "Five";
        } else if (str == "Six") {
            str = "Six";
        } else if (str == "Seven") {
            str = "Seven";
        } else if (str == "Eight") {
            str = "Eight";
        } else if (str == "Nine") {
            str = "Nine";
        }
        result.push_back(str);
    }

    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;

    return true;
}

} // namespace

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));
    return 0;
}