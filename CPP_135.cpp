#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

assert(can_arrange({}) == -1);
vector<int> test1 = {1, 2, 3};
cout << can_arrange(test1) << endl; 
vector<int> test2 = {1, 4, 3};
cout << can_arrange(test2) << endl; 
return 0;