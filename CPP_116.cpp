#include <vector>
#include <algorithm>
#include <bitset>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<vector<int>> sort_vector(vector<int> arr) {
    vector<vector<int>> result = {{}}; // 2D vector to hold the sorted vectors
    for (int num : arr) {
        bool inserted = false;
        for (int i = 0; i < result.size(); ++i) {
            if (issame(result[i], {num})) {
                result[i].push_back(num);
                inserted = true;
                break;
            }
            else if(count(bitset<num>().to_string().begin(), bitset<num>().to_string().end(), '1') <
                   count(bitset<result[i][0]>().to_string().begin(), bitset<result[i][0]>().to_string().end(), '1')){
                result.insert(i, {num});
                inserted = true;
                break;
            }
        }
        if (!inserted) {
            result.push_back({num});
        }
    }
    return result;
}

int main() {
    assert(issame(sort_vector({2,4,8,16,32}) , {{2},{2,4},{2,4,8},{2,4,8,16},{2,4,8,16,32}}));
    return 0;
}