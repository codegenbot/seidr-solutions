#include <vector>
#include <string>
#include <initializer_list>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> byLength(std::vector<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        if(length == 1) {
            result.push_back("One");
        } else if(length == 2) {
            result.push_back("Two");
        } else if(length == 3) {
            result.push_back("Three");
        } else if(length == 4) {
            result.push_back("Four");
        } else if(length == 5) {
            result.push_back("Five");
        } else if(length == 6) {
            result.push_back("Six");
        } else if(length == 7) {
            result.push_back("Seven");
        } else if(length == 8) {
            result.push_back("Eight");
        } else if(length == 9) {
            result.push_back("Nine");
        }
    }
    return result;