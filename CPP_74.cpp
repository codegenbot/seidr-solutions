#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int sum1 = 5; // initialize these variables
    int sum2 = 3;
    vector<vector<string>> lst1 = {{"apple", "banana"}, {"cherry"}};
    vector<vector<string>> lst2 = {{"apple", "orange"}, {"grape"}};

    if (sum1 < sum2) {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    } else if (sum1 > sum2) {
        vector<string> result;
        for (const auto& v : lst2) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    } else {
        vector<string> result;
        for (const auto& v : lst1) {
            for (const string& s : v) {
                result.push_back(s);
            }
        }
        return result;
    }
}