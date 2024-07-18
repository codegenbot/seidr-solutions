#include <vector>
#include <cassert>
using namespace std;

vector<int> make_a_pile(int n);
bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> result;
    result.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        result.push_back(n);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}