#include <iostream>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> res = derivative(xs);
    for (float x : res) {
        cout << x << " ";
    }
    cout << endl;
    
    xs = {1, 2, 3};
    res = derivative(xs);
    for (float x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}