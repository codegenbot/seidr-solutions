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
    vector<float> numbers = {0.5, 0.6, 0.7, 1.2, 1.3};
    float threshold = 0.1;
    if (has_close_elements(numbers, threshold)) {
        cout << "There are close elements." << endl;
    } else {
        cout << "No close elements." << endl;
    }
    return 0;
}