int main(){
    std::vector<int> arr = {3, 8, 2, 5, 12};
    std::vector<int> result = pluck(arr);
    
    assert(result.size() == 2);
    assert(result[0] == 2);
    assert(result[1] == 2);
    
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    assert(issame(a, b));
    
    std::vector<int> c = {1, 2, 4};
    assert(!issame(a, c));
    
    return 0;
}