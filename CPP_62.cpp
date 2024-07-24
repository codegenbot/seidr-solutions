```cpp
#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    if(xs.size() > 1) {
        for (int i = 0; i < xs.size() - 2; i++) { 
            result.push_back((xs[i + 2] - xs[i + 1]) / ((i + 2) - (i + 1)));
        }
    } else if(xs.size() == 1) {
        result.push_back(0);
    }
    return result;
}