#include <vector>
#include <iostream>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {1.5, -2.3, 3.7, -4.8};
    vector<float> positive_numbers = get_positive(numbers);

    for (float x : positive_numbers) {
        cout << x << endl;
    }

    return 0;
}