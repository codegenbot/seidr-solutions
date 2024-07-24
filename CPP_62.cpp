#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if(xs.size() > 1) {
        for (int i = 0; i < xs.size() - 1; i++) {
            result.push_back((xs[i + 1] - xs[i]) / (static_cast<float>(i + 2) - static_cast<float>(i + 1)));
        }
    } else if(xs.size() == 1) {
        result.push_back(0);
    }
    return result;
}