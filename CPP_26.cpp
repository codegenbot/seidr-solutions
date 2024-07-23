```c++
#include <vector>
#include <unordered_map>

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>{1, 4, 5}));
    // ... 
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> map;
    vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;
}