#include <set>
#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return (a==b);
}

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> seen;
    vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}