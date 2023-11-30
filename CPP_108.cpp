#include <vector>
#include <cassert>
using namespace std;

int count_nums(vector<int> n){
    int count = 0;
    for(int i=0; i<n.size(); i++){
        int num = n[i];
        int sum = 0;
        while(num != 0){
            int digit = num % 10;
            sum += abs(digit);
            num /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main(){
    // Example tests
    assert (count_nums({1}) == 1);
    assert (count_nums({-1, 2, 10}) == 3);
    assert (count_nums({-11, 22, 0, -100}) == 4);

    // Additional tests
    // ...

    return 0;
}