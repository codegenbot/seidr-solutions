#include <vector>

bool are_same(vector<int> a, vector<int> b){
    // Implementation of are_same function
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main(){
    assert(are_same(unique_digits({135, 103, 31}), {31, 135}));
    // Additional test cases
    return 0;
}