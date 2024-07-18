#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i=a; i<=b; i++){
        if(i%2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame({2, 4, 6}, generate_integers(2, 6)));
    assert(issame({-10, -8, -6, -4, -2, 0, 2}, generate_integers(-10, 2)));
    return 0;
}