#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> coeff) {
    vector<float> der(coeff.size() - 1);
    
    for (int i = 0; i < coeff.size() - 1; ++i) {
        der[i] = (coeff[i + 1] * (i + 1));
    }
    
    return der;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}