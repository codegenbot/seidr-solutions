#include <vector>
#include <unordered_map>
#include <initializer_list>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> mp;
    vector<int> result;

    for (int i = 0; i < numbers.size(); i++) {
        if (!mp.count(numbers[i]) || !mp[numbers[i]]) {
            mp[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }
    return result;
}