```cpp
#include <vector>
#include <string>

bool is_same(vector<string> vec) {
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] != "One") {
            return false;
        }
    }
    return true;
}

bool issame(vector<string> vec) {
    bool result = true;
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            result = false;
            break;
        }
    }
    return result;
}

#include <algorithm>

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numbers.push_back(to_string(i));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    vector<string> result;
    for (string s : numbers) {
        switch (stoi(s)) {
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
    cout << issame(by_length({9, 4, 8})) << endl;
    return 0;
}