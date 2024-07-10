```cpp
std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result(v);
    for(int i = 0; i < result.size(); i++) {
        auto it = std::find_if(result.begin() + i + 1, result.end(),
                                [&](int x){return x == result[i];});
        if(it != result.end()) {
            result.erase(it);
            i--;
        }
    }
    return result;
}