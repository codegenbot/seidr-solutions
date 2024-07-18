#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

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
    vector<int> a = generate_integers(1, 10);
    vector<int> b = generate_integers(1, 10);
    
    assert(issame(a, b));
    
    return 0;
}