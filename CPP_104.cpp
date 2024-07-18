#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a < b; // Change comparison condition as needed
}

vector<int> unique_digits(vector<int> x);

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            if(temp % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end(), issame);
    return result;
}

int main(){
    assert(issame(unique_digits({135, 103, 31}), {31, 135})); // Modify the comparison logic
    return 0;
}