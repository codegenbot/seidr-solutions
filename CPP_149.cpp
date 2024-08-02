#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool issame(const string& a, const string& b){
    return a.length() == b.length();
}

vector<string> sorted_list_sum(const vector<string>& lst){
    vector<string> result = lst;
    result.erase(remove_if(result.begin(), result.end(), [](const string& s){return s.length() % 2 != 0;}), result.end());
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }
    
    vector<string> result = sorted_list_sum(lst);
    
    for (const auto& s : result) {
        cout << s << endl;
    }
    
    return 0;
}