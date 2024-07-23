#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

namespace {

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(to_string(i));
        }
    }

    sort(numArr.begin(), numArr.end());

    reverse(numArr.begin(), numArr.end());

    vector<string> result;
    for (string str : numArr) {
        string temp = "";
        if (str == "1")
            temp = "One";
        else if (str == "2")
            temp = "Two";
        else if (str == "3")
            temp = "Three";
        else if (str == "4")
            temp = "Four";
        else if (str == "5")
            temp = "Five";
        else if (str == "6")
            temp = "Six";
        else if (str == "7")
            temp = "Seven";
        else if (str == "8")
            temp = "Eight";
        else if (str == "9")
            temp = "Nine";
        result.push_back(temp);
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