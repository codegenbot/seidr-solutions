#include <algorithm>
#include <cctype>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        std::cout << "Error: Vectors of different sizes.\n";
        return false;
    }
    std::sort(a.begin(), a.end(), [](const std::pair<int, std::string>& a) {
        return a.second.size();
    });
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (std::tolower(a[i]) != std::tolower(b[i])) {
            std::cout << "Error: Vectors contain different strings.\n";
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;  // Input numbers
    std::vector<int> arr;
    std::vector<std::string> result;

    if (!(std::cin >> num1 >> num2)) {
        std::cout << "Error: Invalid input.\n";
        return -1;
    }

    for(int i = num1; i <= num2; i++) {
        if(i >= 1 && i <= 9) {
            switch (i) {
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
    }

    return 0;
}