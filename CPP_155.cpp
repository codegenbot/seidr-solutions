#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num){
    vector<int> count(2, 0);
    
    while(num != 0){
        int digit = abs(num % 10);
        if(digit % 2 == 0){
            count[0]++;
        }else{
            count[1]++;
        }
        num /= 10;
    }
    
    return count;
}

int main(){
    assert (is_same(even_odd_count(0) , {1, 0}));
    assert (is_same(even_odd_count(1234) , {2, 2}));
    assert (is_same(even_odd_count(-987) , {1, 2}));
    
    return 0;
}