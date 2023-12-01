#include <vector>

bool issame(vector<int> numbers){
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i] != numbers[0]){
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
    vector<int> result = sum_product(numbers);
    
    if(issame(numbers)){
        cout << "All elements are same" << endl;
    }
    else{
        cout << "All elements are not same" << endl;
    }
    
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;
    
    return 0;
}