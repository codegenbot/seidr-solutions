```cpp
bool same(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        throw runtime_error("Vectors are not the same size");
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}