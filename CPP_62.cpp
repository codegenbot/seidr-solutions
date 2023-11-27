#include <vector>
#include <iostream>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

void issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        cout << "Not same";
        return;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            cout << "Not same";
            return;
        }
    }
    cout << "Same";
}

int main() {
    vector<float> res = derivative({1});
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    issame(res, {});
    return 0;
}