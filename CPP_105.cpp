```cpp
#include <iostream>
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != (std::size_t)b.size()) {
        return false;
    }
    
    for(std::size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::vector<std::string>> by_length(const std::vector<int>& arr) {
    std::vector<std::vector<std::string>> result((std::size_t)10);
    
    for (int i : arr) {
        if(i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    result[0].push_back("One");
                    break;
                case 2:
                    result[(std::size_t)1].push_back("Two");
                    break;
                case 3:
                    result[(std::size_t)2].push_back("Three");
                    break;
                case 4:
                    result[(std::size_t)3].push_back("Four");
                    break;
                case 5:
                    result[(std::size_t)4].push_back("Five");
                    break;
                case 6:
                    result[(std::size_t)5].push_back("Six");
                    break;
                case 7:
                    result[(std::size_t)6].push_back("Seven");
                    break;
                case 8:
                    result[(std::size_t)7].push_back("Eight");
                    break;
                case 9:
                    result[(std::size_t)8].push_back("Nine");
                    break;
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> input;
    int num;

    while (std::cin >> num) {
        if (num >= 1 && num <= 9) {
            switch (num) {
                case 1:
                    input.push_back(1);
                    break;
                case 2:
                    input.push_back(2);
                    break;
                case 3:
                    input.push_back(3);
                    break;
                case 4:
                    input.push_back(4);
                    break;
                case 5:
                    input.push_back(5);
                    break;
                case 6:
                    input.push_back(6);
                    break;
                case 7:
                    input.push_back(7);
                    break;
                case 8:
                    input.push_back(8);
                    break;
                case 9:
                    input.push_back(9);
                    break;
            }
        } else {
            break;
        }
    }

    std::vector<std::string> output = by_length(input);

    for (int i = 0; i < 10; i++) {
        if (!output[i].empty()) {
            std::cout << "Numbers with the same number of digits: ";
            for (const auto& str : output[i]) {
                std::cout << str << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}