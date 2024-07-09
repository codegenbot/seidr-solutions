```cpp
#include <vector>
#include <algorithm>
#include <string>

bool compare(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        switch (i) {
            case 1: result.push_back("One"); break;
            case 2: result.push_back("Two"); break;
            case 3: result.push_back("Three"); break;
            case 4: result.push_back("Four"); break;
            case 5: result.push_back("Five"); break;
            case 6: result.push_back("Six"); break;
            case 7: result.push_back("Seven"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine"); break;
        }
    }
    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert(compare(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}