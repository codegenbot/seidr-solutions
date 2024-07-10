#include<vector>
#include<iostream>
#include<assert.h>
using namespace std;

pair<int, int> sum_product(int num){
    int sum = num;
    int product = num;
    
    return make_pair(sum, product);
}

int main2(){
    pair<int, int> result = sum_product(10);
    
    cout << "(" << result.first << ", " << result.second << ")" << endl;
    
    assert(result == make_pair(10, 10));
    
    return 0;
}