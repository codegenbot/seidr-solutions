#include <vector>

vector<float> derivative(vector<float> xs);

int main() {
    vector<float> input;
    float num;
    while (cin >> num) {
        input.push_back(num);
    }

    vector<float> result = derivative(input);

    for (float num : result) {
        cout << num << " ";
    }

    return 0;
}

vector<float> derivative(vector<float> xs) {
    vector<float> derivative_xs;
    for (int i = 1; i < xs.size(); i++) {
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}