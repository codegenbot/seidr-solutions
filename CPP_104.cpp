#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    vector<int> digits_a, digits_b;
    while (a > 0) {
        digits_a.push_back(a % 10);
        a /= 10;
    }
    while (b > 0) {
        digits_b.push_back(b % 10);
        b /= 10;
    }
    sort(digits_a.begin(), digits_a.end());
    sort(digits_b.begin(), digits_b.end());
    return digits_a == digits_b;
}

vector<int> unique_digits(vector<int> x);

int main() {
    vector<int> numbers = {123, 456, 789, 321, 654};
    vector<int> result = unique_digits(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

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
    sort(result.begin(), result.end());
    return result;
}