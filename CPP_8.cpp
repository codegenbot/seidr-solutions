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
    // add your test cases here using sum_product and issame functions
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(numbers);
    for(auto i : result){
        cout << i << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    issame(a, b);

    return 0;
}