#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num){
    vector<int> result(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool isSame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(isSame(even_odd_count(0), {1, 0}));
    
    return 0;
}