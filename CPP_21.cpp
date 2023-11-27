#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b);

int main() {
    vector<float> numbers;
    
    // Read numbers from user input
    float num;
    while(cin >> num){
        numbers.push_back(num);
    }
    
    // Rescale the numbers to unit interval
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Check if the two vectors are the same
    bool same = issame(numbers, rescaled_numbers);
    
    // Print the result
    cout << (same ? "Yes" : "No") << endl;
    
    return 0;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // Find the minimum and maximum numbers in the vector
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    // Apply linear transformation to each number in the vector
    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = (numbers[i] - min_num) / (max_num - min_num);
    }
    
    return numbers;
}