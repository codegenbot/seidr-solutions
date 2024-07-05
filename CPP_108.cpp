#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum_digits = 0;
        int temp = num;
        while(temp != 0){
            sum_digits += temp % 10;
            temp /= 10;
        }
        if(sum_digits > 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    cout << "All tests passed!" << endl;
    return 0;
}