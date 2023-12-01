#include <vector>
#include <cassert>

bool below_zero(vector<int> operations){
    int balance = 0;
    for(int i=0; i<operations.size(); i++){
        balance += operations[i];
        if(balance < 0){
            return true;
        }
    }
    return false;
}

int main(){
    // Test cases
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    assert(below_zero({1, 2, 3, 4, 5}) == false);
    assert(below_zero({-1, -2, -3, -4, -5}) == true);
    assert(below_zero({2, 4, 6, -12, 8}) == true);
    assert(below_zero({-1, -2, -3, -4, 5}) == false);

    return 0;
}