#include <iostream>
#include <vector>
using namespace std;

vector<int> incr_vector(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        result.push_back(i + 1);
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3};
    vector<int> output = incr_vector(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}