#include<iomanip>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        if (i == 0)
            result[i] = xs[1]; // coefficient of x
        else if (i + 1 < xs.size())
            result[i] = (i + 1) * xs[i + 1]; // coefficient of x^k, for k=1..n-1
    }
    return result;
}