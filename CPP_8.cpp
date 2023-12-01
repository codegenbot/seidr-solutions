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
}
