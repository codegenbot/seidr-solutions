#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

namespace {

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::int64_t> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(i);
        }
    }

    sort(numArr.begin(), numArr.end());

    reverse(numArr.begin(), numArr.end());

    std::vector<std::string> result;
    for (int i : numArr) {
        std::string str = "";
        switch (i) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
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