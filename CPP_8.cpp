#include<vector>
#include<iostream>
#include<utility>
#include<cassert>

using namespace std;

pair<int, int> sum_product(int number){
    return make_pair(number, number);
}

int main2(){
    pair<int, int> result = sum_product(10);
    
    cout << "(" << result.first << ", " << result.second << ")" << endl;
    
    assert(result == make_pair(10, 10));
    
    return 0;
}