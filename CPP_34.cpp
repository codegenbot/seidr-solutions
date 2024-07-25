#include <vector>
#include <set>
#include <cassert>
using namespace std;

bool sameSets(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

bool issame(vector<int> v) { 
    vector<int> uniqueV;
    for (int i : v) {
        bool found = false;
        for (int j : uniqueV) {
            if (i == j) {
                found = true;
                break;
        }
        if (!found)
            uniqueV.push_back(i);
    }
    vector<int> sortedUniqueV(uniqueV.begin(), uniqueV.end());
    sort(sortedUniqueV.begin(), sortedUniqueV.end()); 
    return sameSets(v, sortedUniqueV); 
}

int main() {
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}) == {0, 2, 3, 5, 9, 123});
}