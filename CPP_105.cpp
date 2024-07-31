```c++
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
        string res = "";
        switch (stoi(str)) {
            case 1:
                res = "One";
                break;
            case 2:
                res = "Two";
                break;
            case 3:
                res = "Three";
                break;
            case 4:
                res = "Four";
                break;
            case 5:
                res = "Five";
                break;
            case 6:
                res = "Six";
                break;
            case 7:
                res = "Seven";
                break;
            case 8:
                res = "Eight";
                break;
            case 9:
                res = "Nine";
                break;
        }
        result.push_back(res);
    }

    return result;
}

int main() {
    vector<int> testArr = {9, 4, 8};
    vector<string> result = by_length(testArr);

    assert(result == {"Nine", "Eight", "Four"});
    return 0;
}