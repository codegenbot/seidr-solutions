```cpp
vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    for(int x : lst) {
        if(result.empty() || !issame({x}, result).first)
            result.push_back(x);
        else
            result.pop_back();
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}