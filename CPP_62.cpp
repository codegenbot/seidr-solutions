#include <vector>

vector<float> derivative(const vector<float>& xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> xs = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> derivatives = derivative(xs);
    for (float d : derivatives) {
        cout << d << " ";
    }
    return 0;
}