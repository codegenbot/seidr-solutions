#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<string> result;
    for (string str : numbers) {
        string output = "";
        switch (stoi(str)) {
            case 1:
                output = "One";
                break;
            case 2:
                output = "Two";
                break;
            case 3:
                output = "Three";
                break;
            case 4:
                output = "Four";
                break;
            case 5:
                output = "Five";
                break;
            case 6:
                output = "Six";
                break;
            case 7:
                output = "Seven";
                break;
            case 8:
                output = "Eight";
                break;
            case 9:
                output = "Nine";
                break;
        }
        result.push_back(output);
    }

    return result;
}

int main() {
    vector<int> testArr = {9, 4, 8};
    vector<string> result = by_length(testArr);

    assert(result == {"Nine", "Eight", "Four"});
    return 0;
}