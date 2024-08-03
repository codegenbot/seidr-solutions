#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    return vector<int>{largest_negative, smallest_positive};
}

int main(){
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-3, 1});
    cout << "Test passed successfully!" << endl;

    return 0;
}