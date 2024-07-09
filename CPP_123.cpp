#include <vector>
bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> get_odd_collatz(int n){ // Define the get_odd_collatz function if not defined
    vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);

    vector<int> odd_numbers;
    for(int num : result){
        if(num % 2 != 0){
            odd_numbers.push_back(num);
        }
    }

    sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}

int main(){
    assert(issame(get_odd_collatz(1), {1})); // Compare using correct function
}