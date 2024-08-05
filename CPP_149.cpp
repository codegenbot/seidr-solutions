bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), std::vector<std::string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}