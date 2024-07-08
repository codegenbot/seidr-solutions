#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    using namespace std;
    vector<double> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        a.push_back(x);
    }
    double b;
    cin >> b;
    if (has_close_elements(a, b)) {
        cout << "The array contains close elements." << endl;
    } else {
        cout << "The array does not contain close elements." << endl;
    }
}