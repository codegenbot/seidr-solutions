```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(const std::vector<int>& input) {
    vector<string> output;
    for (int num : input) {
        if (num >= 1 && num <= 9) {
            string str = to_string(num);
            while (str.size() < 2) {
                str = "0" + str;
            }
            output.push_back(str);
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