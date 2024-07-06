#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    vector<int> input = {19, 494, 365, 201, 974, 391, 598, 809, 569, 215, 311, 152, 85, 744, 146, 927, 138, 946, 944, 857};
    stack<int> leaders;

    for (auto it = input.begin(); it != input.end(); ++it) {
        if (!leaders.empty() && *it >= leaders.top()) {
            leaders.push(*it);
        } else {
            while (!leaders.empty() && *it < leaders.top()) {
                leaders.pop();
            }
        }
    }

    cout << "Leaders: ";
    for (auto it = leaders.begin(); it != leaders.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}