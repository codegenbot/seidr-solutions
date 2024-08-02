#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<float> l = {1.0f, -2.0f, 3.0f, -4.0f};
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