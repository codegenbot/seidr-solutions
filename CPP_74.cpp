#include <vector>
#include <string>

bool sameVectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const string& s : lst1) sum1 += s.size();
    for (const string& s : lst2) sum2 += s.size();

    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;
    else
        return (sameVectors(lst1, lst2)?lst1:total_match(total_match(lst1, lst2), {}));
}

int newMain() {
    assert(sameVectors(total_match({"this"}, {}), {}));
    return 0;
}