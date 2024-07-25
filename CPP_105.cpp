```cpp
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string>b) {
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

    for (string &s : numbers) {
        if (s.length() == 1) {
            switch (stoi(s)) {
                case 1:
                    s = "One";
                    break;
                case 2:
                    s = "Two";
                    break;
                case 3:
                    s = "Three";
                    break;
                case 4:
                    s = "Four";
                    break;
                case 5:
                    s = "Five";
                    break;
                case 6:
                    s = "Six";
                    break;
                case 7:
                    s = "Seven";
                    break;
                case 8:
                    s = "Eight";
                    break;
                case 9:
                    s = "Nine";
            }
        }
    }

    return numbers;
}

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
    return 0;
}