#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b);

vector<float> rescale_to_unit(vector<float> numbers) {
    float min = numbers[0];
    float max = numbers[0];
    
    // Find the minimum and maximum values in the vector
    for (int i = 1; i < numbers.size(); i++){
        if (numbers[i] < min){
            min = numbers[i];
        }
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    
    // Apply linear transform to each element in the vector
    for (int i = 0; i < numbers.size(); i++){
        numbers[i] = (numbers[i] - min) / (max - min);
    }
    
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    // Check if the vectors have the same size
    if (a.size() != b.size()) {
        return false;
    }
    
    // Check if each element of the vectors is equal
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<float> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }
    
    vector<float> scaled_numbers = rescale_to_unit(numbers);
    
    cout << "Scaled numbers: ";
    for (int i = 0; i < scaled_numbers.size(); i++) {
        cout << scaled_numbers[i] << " ";
    }
    
    cout << endl;
    
    bool same = issame(numbers, scaled_numbers);
    
    if (same) {
        cout << "The numbers are the same." << endl;
    } else {
        cout << "The numbers are different." << endl;
    }
    
    return 0;
}