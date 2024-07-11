```cpp
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool isSame(vector<string> a, vector<string> b) {
    int sum1 = 0;
    for (const string& s : a) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : b) {
        sum2 += s.length();
    }
    return sum1 == sum2;
}

vector<string> totalMatch(vector<string> lst1, vector<string> lst2) {
    if (isSame(lst1, lst2)) return lst1;
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
    else return lst1;
}

int main() {
    vector<string> a = {"this"};
    vector<string> b = {};
    assert(isSame(totalMatch(a, b), {}));
    return 0;
}