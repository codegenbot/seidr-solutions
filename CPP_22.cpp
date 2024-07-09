```cpp
bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}

vector<int> filter_integers(vector<int> values) {
    vector<int> result;
    for (int value : values) {
        if (value >= 0) { 
            result.push_back(value);
        }
    }
    return result;
}