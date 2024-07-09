```
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
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
                result.emplace_back({"One"});
                break;
            case 2:
                result.emplace_back({"Two"});
                break;
            case 3:
                result.emplace_back({"Three"});
                break;
            case 4:
                result.emplace_back({"Four"});
                break;
            case 5:
                result.emplace_back({"Five"});
                break;
            case 6:
                result.emplace_back({"Six"});
                break;
            case 7:
                result.emplace_back({"Seven"});
                break;
            case 8:
                result.emplace_back({"Eight"});
                break;
            case 9:
                result.emplace_back({"Nine"});
                break;
        }
    }

    return result;
}