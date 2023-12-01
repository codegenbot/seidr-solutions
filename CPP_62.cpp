#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size())
        return false;
    for (int i=0; i<a.size(); i++){
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert (issame(derivative({1}) , {}));

    vector<float> xs = {1, 2, 3, 4, 5};
    vector<float> expected = {2, 6, 12, 20};
    assert (issame(derivative(xs), expected));

    cout << "Tests passed!" << endl;
    return 0;
}