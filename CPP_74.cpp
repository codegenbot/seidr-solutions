#include <string>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    for (const auto& str : lst1) {
        bool found = false;
        for (const auto& word : lst2) {
            if (issame({str}, {word})) {
                found = true;
                break;
            }
        }

        if (!found) {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    vector<string> result = total_match({{"this"}}, {});
    for (const auto& str : result) {
        cout << str << endl;
    }
    return 0;
}