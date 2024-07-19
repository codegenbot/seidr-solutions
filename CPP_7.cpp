bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);
int main(){
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}