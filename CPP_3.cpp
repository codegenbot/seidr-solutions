#include <iostream>
#include <vector>

bool below_zero(std::vector<int> operations){
    int sum = 0;
    for (int op : operations) {
        sum += op;
        if (sum < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert (below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
  
    return 0;
}