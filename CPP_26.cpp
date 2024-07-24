bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() { 
    assert((issame(std::vector<int>(remove_duplicates({1, 2, 3, 2, 4, 3, 5})).begin(), std::vector<int>(remove_duplicates({1, 2, 3, 2, 4, 3, 5}))).end())));
    return 0;
}