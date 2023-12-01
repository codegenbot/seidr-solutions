#include <iostream> // or #include <cassert> if using assert
#include <vector>

using namespace std; // Only if not using assert

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

int main() {
    // Testing the below_zero() function
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);

    return 0;
}