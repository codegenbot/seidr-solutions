#include <vector>

bool issame(vector<int> numbers){
    int n = numbers.size();
    for(int i=0; i<n-1; i++){
        if(numbers[i] != numbers[i+1]){
            return false;
        }
    }
    return true;
}

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    if(issame(numbers)){
        cout << "All numbers are the same" << endl;
    }else{
        cout << "Numbers are not the same" << endl;
    }
    
    vector<int> result = sum_product(numbers);
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;
    
    return 0;
}