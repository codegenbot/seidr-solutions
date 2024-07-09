#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> res;
    for (int i = 1; i <= xs.size() - 1; i++) {
        res.push_back(i * xs[i]);
    }
    return res;
}