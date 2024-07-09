```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(const std::vector<int>& input) {
    vector<string> output;
    for (int num : input) {
        switch(num) {
            case 1:  output.push_back("One"); break;
            case 2:  output.push_back("Two"); break;
            case 3:  output.push_back("Three"); break;
            case 4:  output.push_back("Four"); break;
            case 5:  output.push_back("Five"); break;
            case 6:  output.push_back("Six"); break;
            case 7:  output.push_back("Seven"); break;
            case 8:  output.push_back("Eight"); break;
            case 9:  output.push_back("Nine"); break;
        }
    }
    return output;
}

int main() {
    vector<int> input;
    cout << "Enter the numbers: ";
    int num;
    while (cin >> num) {
        if (num >= 1 && num <= 9) {
            input.push_back(num);
        }
        else {
            break;
        }
    }
    vector<string> output = by_length(input);
    
    if (issame({"Nine", "Eight", "Four"}, output)) {
        for (string str : output) {
            cout << str << endl;
        }
    }
    return 0;
}