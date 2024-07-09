using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> nums = {1.0, 2.0, 3.0, 4.5};
    cout << has_close_elements(nums, 0.5) << endl;
    return 0;
}