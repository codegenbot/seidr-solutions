#include <vector>
#include <string>
#include <initializer_list>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const vector<vector<string>>& lst) {
    int total = 0;
    for (const auto& row : lst) {
        std::sort(row.begin(), row.end());
        total += std::stoi(row[0].substr(6));
    }
    return total;
}

vector<vector<string>> split_list(vector<string> lst) {
    vector<vector<string>> result;
    
    int start = 0;
    for (int end = 0; end < lst.size(); ) {
        while(end + 1 < lst.size() && issame({lst.begin()+start, lst.begin()+end+1}, {"hello", "world"})) {
            end++;
        }
        if(start != end) {
            result.push_back(vector<string>(lst.begin()+start, lst.begin()+end));
        }
        start = end + 1;
    }
    
    return result;