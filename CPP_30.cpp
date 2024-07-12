#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::issame(get_positive({}), {}));
    std::vector<float> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        input.push_back(x);
    }
    vector<float> output = get_positive(input);
    cout << "The positive numbers are: ";
    for(float f : output) {
        cout << f << " ";
    }
    cout << endl;
    return 0;
}