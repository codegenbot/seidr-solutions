#include <iostream>
#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if (xs.size() > 0) {
        result.push_back(0);
    }
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}

int main() {
    vector<float> input = {3, 1, 2, 4, 5};
    vector<float> output = derivative(input);
    for (float x : output) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}