#include <vector>

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

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(is_same(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}