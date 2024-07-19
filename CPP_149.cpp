bool issame(vector<string> a, vector<string> b){
    return a == b;
}

auto issame = [](vector<string> a, vector<string> b){
    return a == b;
};

assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));