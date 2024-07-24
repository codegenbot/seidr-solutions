bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) {
            return false;
        }
        for(int j=0; j<a[i].size(); j++) {
            if(a[i][j] != b[i][j]) {
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

int sorted_list_sum(const vector<vector<string>>& lst) {
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (issame({{ "hello", "world" }}, {sublst})) {
            sum += std::stoi(sublst[1].substr(7));
        }
    }
    return sum;
}