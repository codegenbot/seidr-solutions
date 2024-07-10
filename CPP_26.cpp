```cpp
std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++) {
        if(std::find_if(result.begin(), result.end(), [&](int x){return x == v[i];}) == result.end()) {
            result.push_back(v[i]);
        }
    }
    return result;
}