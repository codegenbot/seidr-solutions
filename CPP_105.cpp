#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back(to_string(i));
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> temp;
    for (string s : result) {
        switch (stoi(s)) {
            case 1: temp.push_back("One"); break;
            case 2: temp.push_back("Two"); break;
            case 3: temp.push_back("Three"); break;
            case 4: temp.push_back("Four"); break;
            case 5: temp.push_back("Five"); break;
            case 6: temp.push_back("Six"); break;
            case 7: temp.push_back("Seven"); break;
            case 8: temp.push_back("Eight"); break;
            case 9: temp.push_back("Nine"); break;
        }
    }
    return temp;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}