#include <vector>
#include <cassert>

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b){
    // add your implementation here
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
    assert(issame(generate_integers(1, 10), generate_integers(2, 11)));
    return 0;
}