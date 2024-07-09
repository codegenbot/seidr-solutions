int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    assert(issame(a, b));
    
    std::vector<int> c = {4, 5, 6};
    std::vector<int> d = {4, 5, 7};
    
    assert(!issame(c, d));
    
    return 0;
}