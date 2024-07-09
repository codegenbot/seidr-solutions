```c++
#include <vector>
#include <algorithm>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(std::to_string(i));
    }
    std::sort(temp.begin(), temp.end());
    std::reverse(temp.begin(), temp.end());
    std::vector<std::string> result;
    for (std::string s : temp) {
        switch (stoi(s)) {
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
    return result;
}

int main() {
    std::vector<std::string> b = by_length({9, 4, 8});
    if (!same(by_length({9, 4, 8}), b)) {
        std::cerr << "Test failed." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
}