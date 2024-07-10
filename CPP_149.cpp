#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool aresame(vector<string> a, vector<string> b, vector<string> c) {
    if (a.size() != b.size() || a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!aresame({a[i]}, {b[i]}, {c[i]})) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> input) {
    sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() > 1) {
            char firstChar = input[i][0];
            for (int j = i + 1; j < input.size(); j++) {
                if (input[j][0] == firstChar) {
                    input.erase(input.begin() + j);
                    j--;
                }
            }
        }
    }
    return input;
}

vector<string> sum(vector<string> a, vector<string> b, vector<string> c) {
    vector<string> result;
    for (int i = 0; i < a.size(); i++) {
        string s1 = a[i], s2 = b[i], s3 = c[i];
        int sum = stoi(s1) + stoi(s2) + stoi(s3);
        if (sum > 9) {
            while (sum > 0) {
                result.push_back(to_string(sum % 10));
                sum /= 10;
            }
        } else {
            result.push_back(s1);
        }
    }
    return sorted_list_sum(result);
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    vector<string> result = sum(a, b, c);
    for (string s : result) {
        cout << s << " ";
    }
    return 0;
}