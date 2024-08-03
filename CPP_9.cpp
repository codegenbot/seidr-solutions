#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    vector<int> numbers = {1, 3, 5, 2, 8};

    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        cout << max_num << " ";
    }

    return 0;
}