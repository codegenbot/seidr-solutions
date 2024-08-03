bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b){
    return a == b;
}

int main(){
    std::vector<std::vector<int>> result = get_row({{}, {1}, {1, 2, 3}}, 3);
    std::vector<std::vector<int>> expected = {{2, 2}};
    assert(issame(result, expected));
    return 0;
}