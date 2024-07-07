#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double similarity(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        sum += abs(v1[i] - v2[i]);
    }
    return sum / (v1.size() * max(abs(*max_element(v1.begin(), v1.end())), abs(*min_element(v1.begin(), v1.end()))));
}

int main() {
    // your code here
    return 0;
}