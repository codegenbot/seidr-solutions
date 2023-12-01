#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    vector<float> numbers = {1.5, -2.3, 4.7, -3.2, 0.9};
    vector<float> positive_numbers = get_positive(numbers);
    for (int i = 0; i < positive_numbers.size(); i++) {
        cout << positive_numbers[i] << " ";
    }
    return 0;
}