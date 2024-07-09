```c++
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& a, float delta) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (std::abs(a[i] - a[i + 1]) <= delta) {
            return true;
        }
    }
    return false;
}

int main() {
    using namespace std;
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    if (has_close_elements(a, 0.1)) {
        cout << "There are close elements." << endl;
    } else {
        cout << "No close elements found." << endl;
    }
}