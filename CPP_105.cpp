#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i]) return false;
    return true;
}

std::vector<string> by_length(vector<int> arr) {
    vector<int> numArr;
    for (int i : arr) {
        if (i >= 10 && i <= 99) {
            int tens = i / 10;
            int ones = i % 10;
            string str = "";
            switch (tens) {
                case 1:
                    str += "Ten";
                    break;
                case 2:
                    str += "Twenty";
                    break;
                case 3:
                    str += "Thirty";
                    break;
                case 4:
                    str += "Forty";
                    break;
                case 5:
                    str += "Fifty";
                    break;
                case 6:
                    str += "Sixty";
                    break;
                case 7:
                    str += "Seventy";
                    break;
                case 8:
                    str += "Eighty";
                    break;
                case 9:
                    str += "Ninety";
                    break;
            }
            switch (ones) {
                case 0: str += ""; break;
                case 1:
                    str += "One";
                    break;
                case 2:
                    str += "Two";
                    break;
                case 3:
                    str += "Three";
                    break;
                case 4:
                    str += "Four";
                    break;
                case 5:
                    str += "Five";
                    break;
                case 6:
                    str += "Six";
                    break;
                case 7:
                    str += "Seven";
                    break;
                case 8:
                    str += "Eight";
                    break;
                case 9:
                    str += "Nine";
                    break;
            }
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    vector<string> output = by_length(input);

    if (output.empty()) {
        std::cout << "No numbers to convert." << std::endl;
    } else {
        for (const auto& str : output)
            std::cout << str << " ";
        std::cout << std::endl;

        bool same = issame(output, output);
        if (same) {
            std::cout << "All numbers are the same." << std::endl;
        } else {
            std::cout << "Numbers are not all the same." << std::endl;
        }
    }

    return 0;
}