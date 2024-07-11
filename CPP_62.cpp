#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back((xs[i] - xs[i-1]) / static_cast<float>(i));
    }
    return result;
}