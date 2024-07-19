```cpp
auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int> result(std::unique_copy(first, last));
    return result;
}

bool isSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}