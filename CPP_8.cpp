#include <vector>

bool issame(vector<int> numbers){
    for(int i=1; i<numbers.size(); i++){
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

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    if(issame(numbers)){
        vector<int> result = sum_product(numbers);
        for(int i=0; i<result.size(); i++){
            cout << result[i] << " ";
        }
    } else {
        cout << "All elements in the vector are not the same.";
    }
    
    return 0;
}