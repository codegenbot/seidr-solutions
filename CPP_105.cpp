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
        string newStr = "";
        switch (stoi(str)) {
            case 1:
                newStr = "One";
                break;
            case 2:
                newStr = "Two";
                break;
            case 3:
                newStr = "Three";
                break;
            case 4:
                newStr = "Four";
                break;
            case 5:
                newStr = "Five";
                break;
            case 6:
                newStr = "Six";
                break;
            case 7:
                newStr = "Seven";
                break;
            case 8:
                newStr = "Eight";
                break;
            case 9:
                newStr = "Nine";
                break;
        }
        result.push_back(newStr);
    }

    return result;
}

int main() {
    vector<int> testArr = {9, 4, 8};
    vector<string> result = by_length(testArr);

    assert(result == {"Nine", "Eight", "Four"});
    return 0;
}