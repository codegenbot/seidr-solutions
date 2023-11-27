#include <vector>

bool issame(vector<float> a, vector<float> b);

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

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    // Your test code here
    
    return 0;
}