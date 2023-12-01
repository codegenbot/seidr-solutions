#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    string num_str = to_string(abs(num));
    
    for(char c : num_str){
        int digit = c - '0';
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    vector<int> result = {even_count, odd_count};
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(123456), {3, 3}));
    assert(issame(even_odd_count(-987654), {3, 3}));
    assert(issame(even_odd_count(2468), {4, 0}));
    assert(issame(even_odd_count(-13579), {0, 5}));
    
    return 0;
}