#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    vector<int> digitsA;
    vector<int> digitsB;
    
    while (a > 0) {
        digitsA.push_back(a % 10);
        a /= 10;
    }
    
    while (b > 0) {
        digitsB.push_back(b % 10);
        b /= 10;
    }
    
    sort(digitsA.begin(), digitsA.end());
    sort(digitsB.begin(), digitsB.end());
    
    return digitsA == digitsB;
}

vector<int> unique_digits(vector<int> x);

int main() {
    vector<int> nums = {123, 456, 789, 321, 654};
    vector<int> result = unique_digits(nums);
    
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