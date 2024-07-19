```cpp
#include <vector>
#include <unordered_map>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    unordered_map<int,int> mp;
    vector<int> result;

    for(auto num : numbers) {
        if(mp[num] == 0) {
            result.push_back(num);
            mp[num]++;
        }
    }

    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}