#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        lst.push_back(temp);
    }
    vector<string> result = sorted_list_sum(lst);
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back({str});
        }
    }
    for(auto &v : result) 
    sort(v.begin(), v.end());
    
    return result;
}