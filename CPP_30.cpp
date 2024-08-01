```cpp
vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float>b) {
    if(a.size() != b.size()) return false;
    for(float i : a) if(i != b[0]) return false;
    return true;
}