bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) {
            return false;
        }
        for(int j=0; j<a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int sum = sorted_list_sum({{"aaaa", "bbbb"}, {"dd"}, {"cc"}});
    return 0;
}