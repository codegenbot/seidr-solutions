#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if(xs.size() > 1){
        for (int i = 1; i < xs.size(); i++) {
            result.push_back((xs[i] - xs[i-1]) / (static_cast<double>(i)));
        }
    } else {
        result = {};
    }
    return result;
}