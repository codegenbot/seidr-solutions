#include <vector>
#include <string>

int main() {
    std::vector<int> arr = {9, 4, 8};
    std::vector<std::string> result = by_length(arr);
    bool b = issame(result, std::vector<std::string>{ "Nine", "Eight", "Four" });
    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }
    std::reverse(sortedArr.begin(), sortedArr.end());
    std::vector<std::string> result;
    for (int num : sortedArr) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    return result;
}