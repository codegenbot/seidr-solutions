#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<string> str, string substr) {
    vector<vector<string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            result.push_back({s});
        }
    }
    return result;

}

int main() {
    vector<string> str = {"grunt", "trumpet", "prune", "gruesome"};
    string substr = "run";
    vector<vector<string>> res = filter_by_substring(str, substr);
    for (const auto& s : res) {
        cout << "{"; 
        for(auto c: s)
            cout<<c<<" ";
        cout<<"}\n";
    }
}