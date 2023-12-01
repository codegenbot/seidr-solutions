#include <vector>

void issame(vector<int> a, vector<int> b){
    // add your logic here
}

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;

    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};
}

int main(){
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(input);
    
    // Print the sum and product
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;
    
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    issame(a, b);
    
    return 0;
}