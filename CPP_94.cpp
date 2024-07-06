#include <iostream>
#include <vector>
using namespace std;

int calculateSumOfDigitsLargestPrime(vector<int> lst) {
    int maxPrime = -1, sum = 0;
    for(int i : lst){
        if(isPrime(i)){
            if(i > maxPrime)
                maxPrime = i;
        }
    }
    while(maxPrime > 0){
        sum += (maxPrime % 10);
        maxPrime /= 10;
    }
    return sum;
}

int main_test() {
    int num;
    cout << "Enter the list of numbers (space separated): ";
    cin >> num;
    vector<int> lst = {num};
    cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << endl;
    return 0;
}