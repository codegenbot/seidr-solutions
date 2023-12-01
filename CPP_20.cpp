#include <vector>

vector<float> find_closest_elements(vector<float> numbers);
bool issame(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = abs(numbers[0] - numbers[1]);
    float num1 = numbers[0];
    float num2 = numbers[1];
    
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result;
    result.push_back(num1);
    result.push_back(num2);
    
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    // Code for testing purposes
    vector<float> numbers = {1, 2, 3, 4, 5};
    vector<float> result = find_closest_elements(numbers);
    
    // Print the result
    for(float num : result){
        cout << num << " ";
    }
    
    return 0;
}