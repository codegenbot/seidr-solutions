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
        result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    std::cout << "Success!" << std::endl;
    return 0;
}