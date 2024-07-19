#include <vector>
#include <iostream>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<float> numbers = {1.2, -3.4, 5.6, -7.8};
    vector<float> positive_numbers = get_positive(numbers);
    for(float num : positive_numbers) {
        cout << num << endl;
    }
    return 0;
}