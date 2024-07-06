#include <iostream>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); i++) {
        result[i-1] = xs[i] * i;
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
    return 0;
}