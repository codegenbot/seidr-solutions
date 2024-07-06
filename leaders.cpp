
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> input = {19, 494, 365, 201, 974, 391, 598, 809, 569, 215, 311, 152, 85, 744, 146, 927, 138, 946, 944, 857};
    vector<int> leaders;

    for (int i = 0; i < input.size(); i++) {
        bool is_leader = true;
        for (int j = i + 1; j < input.size(); j++) {
            if (input[i] < input[j]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) {
            leaders.push_back(input[i]);
        }
    }

    cout << "The leaders are: ";
    for (int i : leaders) {
        if (i == input.size() - 1)
            cout << i << endl;
        else
            cout << i << ", ";
    }
}