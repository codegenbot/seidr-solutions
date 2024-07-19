#include <iostream>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    
    if(xs.size() > 1) {
        for(int i = 1; i < xs.size(); i++) {
            result.push_back(i * xs[i]);
        }
    } else {
        result.push_back(0);
    }
    
    return result;
}

int main() {
    vector<float> test1 = {3, 1, 2, 4, 5};
    vector<float> test2 = {1, 2, 3};

    cout << "Test 1: ";
    for(float x : derivative(test1)) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Test 2: ";
    for(float x : derivative(test2)) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}