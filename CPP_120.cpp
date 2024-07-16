#include <vector>

bool issame(const vector<int> &a, const vector<int> &b){
    return a == b;
}

vector<int> maximum(const vector<int> &a, const vector<int> &b){
    return (a > b) ? a : b;
}