```cpp
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

template<typename T>
std::vector<T> make_vector(T t) {
    std::vector<T> result(1, t);
    return result;
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
    assert(isSame(sort_even(make_vector(5.0f)), make_vector(8.0f), make_vector(-12.0f), make_vector(4.0f), 
            make_vector(23.0f), make_vector(2.0f), make_vector(3.0f), make_vector(11.0f), 
            make_vector(12.0f), make_vector(-10.0f)));
    return 0;
}