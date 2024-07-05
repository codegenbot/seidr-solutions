#include <vector>
#include <iostream>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> res1 = derivative({1});
    vector<float> res2 = derivative({1, 2, 3});
    
    for (float val : res1) {
        cout << val << " ";
    }
    cout << endl;

    for (float val : res2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}