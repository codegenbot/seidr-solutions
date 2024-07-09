```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    return a == b;
}

vector<vector<string>> by_length(const vector<int>& arr) {
    vector<int> num;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            num.push_back(i);
        }
    }

    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());

    vector<vector<string>> result;
    for (int n : num) {
        switch (n) {
            case 1:
                result.push_back({"One"});
                break;
            case 2:
                result.push_back({"Two"});
                break;
            case 3:
                result.push_back({"Three"});
                break;
            case 4:
                result.push_back({"Four"});
                break;
            case 5:
                result.push_back({"Five"});
                break;
            case 6:
                result.push_back({"Six"});
                break;
            case 7:
                result.push_back({"Seven"});
                break;
            case 8:
                result.push_back({"Eight"});
                break;
            case 9:
                result.push_back({"Nine"});
                break;
        }
    }

    return result;
}

int main() {
    assert(by_length({9, 4, 8}) == vector<vector<string>>{{"Nine"}, {"Eight"}, {"Four"}});

    return 0;
}