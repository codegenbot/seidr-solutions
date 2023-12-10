
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int currentLeader = INT_MIN;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] > currentLeader) {
            currentLeader = v[i];
            result.push_back(currentLeader);
        }
    }
    return result;
}

int main() {
    vector<int> input = {1, 451};
    vector<int> output = leaders(input);
    for (auto x : output) {
        cout << x << " ";
    }
    return 0;
}