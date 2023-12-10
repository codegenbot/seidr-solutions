#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> leaders = leaders(nums);
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    return 0;
}
