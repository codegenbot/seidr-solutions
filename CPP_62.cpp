#include <iostream>
#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> res = derivative(xs);
    cout << "Derivative: ";
    for (float x : res) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}