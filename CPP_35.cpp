```cpp
int findMax(vector<int> l) {
    size_t n = l.size();
    int max = *std::max_element(l.begin(), l.end()); 
    return abs(max - 12);
}