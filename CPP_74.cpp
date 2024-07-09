```cpp
#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> totalMatch(vector<vector<string>> lst1, vector<vector<string>> lst2) {
    int sum1 = 0;
    for (const auto& v : lst1) {
        for (const string& s : v) {
            sum1 += s.length();
        }
    }
    int sum2 = 0;
    for (const auto& v : lst2) {
        for (const string& s : v) {
            sum2 += s.length();
        }
    }

    if (sum1 < sum2) return vector<string>(lst1.begin(), lst1.end());
    else if (sum1 > sum2) return vector<string>(lst2.begin(), lst2.end());

    if (same(lst1, lst2)) {
        return vector<string>(lst1.begin(), lst1.end());
    }
    else if (!lst1.empty()) {
        for (const auto& v : lst2) {
            bool found = false;
            for (const string& s : v) {
                bool foundInList1 = false;
                for (const auto& t : lst1) {
                    for (const string& u : t) {
                        if (s == u) {
                            foundInList1 = true;
                            break;
                        }
                    }
                    if (foundInList1) break;
                }
                if (!foundInList1) return vector<string>(lst1.begin(), lst1.end());
            }
        }
    } else {
        for (const auto& v : lst2) {
            bool found = false;
            for (const string& s : v) {
                bool foundInList1 = false;
                for (const auto& t : lst1) {
                    for (const string& u : t) {
                        if (s == u) {
                            foundInList1 = true;
                            break;
                        }
                    }
                    if (foundInList1) break;
                }
                if (!foundInList1) return vector<string>(lst2.begin(), lst2.end());
            }
        }
    }

    return {};
}

int main() {  
    vector<vector<string>> result = totalMatch({{{"this"}}}, {{{}}, {{}}});
    cout << "Result: ";
    for (const auto& v : result) {
        for (const string& s : v) {
            cout << s << " ";
        }
    }
    cout << endl;
    return 0; 
}