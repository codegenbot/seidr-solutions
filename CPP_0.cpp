#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<double>, double);

int mainProblem() {
    vector<double> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    vector<double> b;
    for (double num : a) {
        b.push_back(num);
    }
    assert(has_close_elements(b, 0.5) == false);
    return 0;
}

bool has_close_elements(vector<double> v, double tol) {
    bool result = true;
    for(int i=1; i<v.size(); i++) {
        if(abs(v[i] - v[i-1]) < tol) {
            result = false;
            break;
        }
    }
    return result;
}