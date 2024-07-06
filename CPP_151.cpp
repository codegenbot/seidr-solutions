#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> input; 
    int n;
    cin >> n;
    input.resize(n);
    for (auto& x : input) {
        cin >> x;
    }
    float output = double_the_difference(input);
    cout << output;
    return 0;
}