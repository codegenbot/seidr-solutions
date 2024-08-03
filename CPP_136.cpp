#include <iostream>
#include <vector>
#include <limits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = numeric_limits<int>::min();
    int smallest_positive = numeric_limits<int>::max();

    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main(){
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-3, 1});
    cout << "Test passed successfully!" << endl;
    
    return 0;
}