```
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    set<int> s(a.begin(), a.end());
    for(int i = 0; i < b.size(); ++i) {
        if (s.find(b[i]) == s.end()) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> s(numbers.begin(), numbers.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}