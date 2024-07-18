#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b){
    return (a == b);
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
    vector<int> first = generate_integers(1, 10);
    vector<int> second = generate_integers(1, 10);
    
    assert(issame(first, second));
    
    return 0;
}