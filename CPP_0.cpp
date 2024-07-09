#include <vector>
#include <cmath>
#include <initializer_list>

using namespace std;

bool has_close_elements(const vector<float>& elements, float tolerance) {
    for (int i = 1; i < elements.size(); ++i) {
        if (abs(elements[i] - elements[i-1]) <= tolerance) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.0f};
    cout << (has_close_elements(a, 0.0f) ? "True" : "False") << endl;
    return 0;
}