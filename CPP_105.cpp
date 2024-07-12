#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            switch (num) {
                case 1:
                    sortedArr.push_back(1);
                    break;
                case 2:
                    sortedArr.push_back(2);
                    break;
                case 3:
                    sortedArr.push_back(3);
                    break;
                case 4:
                    sortedArr.push_back(4);
                    break;
                case 5:
                    sortedArr.push_back(5);
                    break;
                case 6:
                    sortedArr.push_back(6);
                    break;
                case 7:
                    sortedArr.push_back(7);
                    break;
                case 8:
                    sortedArr.push_back(8);
                    break;
                case 9:
                    sortedArr.push_back(9);
                    break;
            }
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

int main() {
    if(by_length({9, 4, 8}) != std::vector<std::string>({"Nine", "Eight", "Four"})) {
        assert(false);
    }
    return 0;
}