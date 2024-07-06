#include <vector>
#include <cmath> 

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::fabs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if (has_close_elements(a, 0.1)) 
        cout << "The array contains close elements." << endl;
    else
        cout << "The array does not contain close elements." << endl;
}