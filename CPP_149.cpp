```cpp
int main() {
    vector<vector<string>> list1 = {{"aaaa", "bbbb"}, {"dd"}, {"cc"}};
    vector<vector<string>> list2 = {{"cc"}, {"dd"}, {"aaaa", "bbbb"}};
    assert(issame(list1, list2));
    return 0;
}

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
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (issame({{"hello", "world"}}, sublst)) {
            sum += std::stoi(sublst[1].substr(7));
        }
    }
    return sum;
}