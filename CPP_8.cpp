#include <vector>

bool issame(vector<int> v1, vector<int> v2){
    if(v1.size() != v2.size()){
        return false;
    }
    
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
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
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(input);
    
    if(issame(result, {15, 120})){
        cout << "Correct output" << endl;
    }
    else{
        cout << "Incorrect output" << endl;
    }
    
    return 0;
}