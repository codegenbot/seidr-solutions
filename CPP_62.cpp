#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i <= xs.size() - 1; i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}