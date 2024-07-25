bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{0, 0, 0, 0, 243, 0, 0}));
    return 0;
}