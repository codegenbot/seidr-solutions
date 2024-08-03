#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if (xs.size() > 1) {
        for (int i = 1; i < xs.size(); i++) {
            result.push_back(i * xs[i]);
        }
    }
    return result;
}