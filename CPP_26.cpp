```
#include <initializer_list>
#include <vector>

bool std::operator==(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++)if(a[i]!=b[i])return false;
    return true;
}

std::vector<std::vector<int>> remove_duplicates(std::vector<std::vector<int>> numbers) {
    std::unordered_map<std::vector<int>, bool> mp;
    std::vector<std::vector<int>> result;

    for (int i = 0; i < numbers.size(); i++) {
        if (!mp.count(numbers[i])) {
            mp[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }

    return result;
}