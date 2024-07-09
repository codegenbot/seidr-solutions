#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(const std::vector<int>& input) {
    vector<string> output;
    for (int num : input) {
        if (num == 1) {
            output.push_back("One");
        }
        else if (num == 2) {
            output.push_back("Two");
        }
        else if (num == 3) {
            output.push_back("Three");
        }
        else if (num == 4) {
            output.push_back("Four");
        }
        else if (num == 5) {
            output.push_back("Five");
        }
        else if (num == 6) {
            output.push_back("Six");
        }
        else if (num == 7) {
            output.push_back("Seven");
        }
        else if (num == 8) {
            output.push_back("Eight");
        }
        else if (num == 9) {
            output.push_back("Nine");
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

    if (issame({ "Nine", "Eight", "Four" }, output)) {
        for (string str : output) {
            cout << str << endl;
        }
    }
    return 0;
}