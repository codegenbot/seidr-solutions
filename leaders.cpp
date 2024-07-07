#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input from user
    vector<int> v = { 10, 5, 7, 4, 9 };

    // Find leaders in the vector
    int max = *std::max_element(v.begin(), v.end());

    // Output the leader
    cout << "Leader: " << max << endl;

    return 0;
}