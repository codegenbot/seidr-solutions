#include <vector>
#include <algorithm>

int double_the_difference(vector<float> numbers) {
    int minNum = *min_element(numbers.begin(), numbers.end());
    int maxNum = *max_element(numbers.begin(), numbers.end());
    
    if (maxNum - minNum % 2 == 0) {
        return static_cast<int>((double(maxNum - minNum)) / 2);
    }
    else {
        return 0;
    }
}

int odd_sum(vector<float> numbers) {
    int sum = 0;
    for (float num : numbers) {
        if (num % 1 != 0) {
            sum += static_cast<int>(num);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5};
    int odd_sum;
    assert(double_the_difference(lst) == odd_sum);
    odd_sum = odd_sum(lst);
    cout << "Double the difference: " << double_the_difference(lst) << endl;
    cout << "Sum of odds: " << odd_sum << endl;
}