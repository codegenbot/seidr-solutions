```cpp
bool issame(vector<string> a, vector<string>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}