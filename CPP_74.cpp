#include <vector>
#include <string>
#include <ostream>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> totalMatch(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else if (!lst1.empty() && !lst2.empty()) {
        if (same(lst1, lst2)) return lst1;
        for (const string& s : lst1) {
            bool found = false;
            for (const string& t : lst2) {
                if (s == t) {
                    found = true;
                    break;
                }
            }
            if (!found) return lst1;
        }
        for (const string& s : lst2) {
            bool found = false;
            for (const string& t : lst1) {
                if (s == t) {
                    found = true;
                    break;
                }
            }
            if (!found) return lst2;
        }
    } else if (!lst1.empty()) return lst1;
    else return lst2;

    return {};
}

int main() {
    vector<string> result = totalMatch({"this"}, {});
    cout << "Result: ";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}