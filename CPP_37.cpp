```cpp
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> make_vector(const vector<float>& v) {
    return v;
}

bool isSame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(abs(a[i]) != abs(b[i])) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            for(int k=i; k< l.size(); k=k+2){
                result[j++] = l[k];
            }
            sort(result.begin(),result.end());
            for(int i=0; i<4 && j<i+4;i++){
                result[i] = 0;
            }
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() { 
    vector<float> input({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f});
    vector<float> expected = { -12.0f, 8.0f, 3.0f, 4.0f, 5.0f, 2.0f, 12.0f, 11.0f, 23.0f, -10.0f};
    assert(isSame(sort_even(input), expected));
}