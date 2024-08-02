#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<float> l;
    cout << "Enter numbers (enter -1 to finish): ";
    float x;
    while ((cin >> x) && (x != -1)) {
        l.push_back(x);
    }
    vector<float> result = get_positive(l);
    for (float x : result) {
        cout << x << " ";
    }
    return 0;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}