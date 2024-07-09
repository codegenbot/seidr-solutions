```cpp
bool issame(vector<float> a, vector<float> vector_float_b){
    if(a.size() != vector_float_b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(abs(a[i] - vector_float_b[i]) > 1e-6) return false;
    }
    return true;
}