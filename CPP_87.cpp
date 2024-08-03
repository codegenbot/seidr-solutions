bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}