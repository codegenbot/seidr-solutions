#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int i=0; i<n.size(); i++){
        int sum = 0;
        int num = abs(n[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    
    return 0;
}