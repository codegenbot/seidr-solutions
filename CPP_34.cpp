#include <vector>
#include <set>
#include <cassert>

using namespace std;

bool sameSets(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

vector<int> unique(vector<int> vec) {
    set<int> s(vec.begin(), vec.end());
    return vector<int>(s.begin(), s.end());
}

int main() {
    assert(sameSets({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    vector<int> a = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> b = unique(a);
    cout << "Unique set: ";
    for(int x : b) {
        cout << x << " ";
    }
    cout << endl;
}