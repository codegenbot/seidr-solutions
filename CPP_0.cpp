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
        cout << "The input list contains elements that are within the given threshold." << endl;
    } else {
        cout << "The input list does not contain elements that are within the given threshold." << endl;
    }
    return 0;
}