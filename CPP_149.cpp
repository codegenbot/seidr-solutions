#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSame(vector<pair<string, int>> a, vector<pair<string, int>> b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<pair<string, int>> sorted_list_sum(vector<pair<string, int>> lst) {
    auto it = remove_if(lst.begin(), lst.end(), [&](const pair<string, int>& p){ return (stoi(p.second)) % 2; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end());
    return lst;
}

int main() {
    int n; 
    cin >> n;

    vector<pair<string, int>> lst;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int num = i + 1;
        lst.push_back({s, to_string(num)});
    }
    
    vector<pair<string, int>> result = sorted_list_sum(lst);
    
    cout << "Sorted List Sum: ";
    for(auto p : result) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;