#include <vector>

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
    // Code to test the find_closest_elements function
    vector<float> numbers = {1.5, 2.3, 4.7, 3.2, 1.8};
    vector<float> closest_elements = find_closest_elements(numbers);
    
    // Print the closest elements
    for(int i=0; i<closest_elements.size(); i++){
        cout << closest_elements[i] << " ";
    }
    
    return 0;
}