using namespace std;

int main() {
    vector<float> numbers = {1.0f, 2.5f, 3.9f};
    float threshold = 1.0f;
    cout << (has_close_elements(numbers, threshold) ? "True" : "False") << endl;
    return 0;
}

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