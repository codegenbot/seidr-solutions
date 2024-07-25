#include <vector>

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const vector<int>& vec1, const vector<int>& vec2) {
    return vec1 == vec2;
}