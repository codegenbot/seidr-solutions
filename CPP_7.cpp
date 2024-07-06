#include <iostream>
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            throw std::runtime_error("Vectors contain different elements");
        }
    }
    return true;
}