using namespace std;

int main() {
    vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f};
    float threshold = 1.5f;
    
    if (has_close_elements(numbers, threshold)) {
        cout << "The vector has at least two elements that are within the given threshold." << endl;
    } else {
        cout << "The vector does not have any elements that are within the given threshold." << endl;
    }
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