bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));