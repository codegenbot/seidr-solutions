#include <vector>
#include <cassert>

using namespace std;

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> generate_integers(int a, int b){
    vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

assert(issame(generate_integers(17,89), {}));