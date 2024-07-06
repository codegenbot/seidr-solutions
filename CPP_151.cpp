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
    std::vector<float> input; // read input from user
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        input.push_back(x);
    }
    // process the input
    float output = double_the_difference(input);
    // print the output
    cout << output;
    return 0;
}