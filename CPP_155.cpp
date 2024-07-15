#include <iostream>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <string>

using namespace std;

vector<int> even_odd_count(int num){
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    assert (issame(even_odd_count(0), {1, 0}));
    return 0;
}