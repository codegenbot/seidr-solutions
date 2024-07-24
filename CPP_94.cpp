#include <vector>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

int main() {
    vector<int> lst;
    int num;
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> lst.push_back(i);
    }
    cout << "The sum of digits of the maximum prime is: " << skjkasdkd(lst) << endl;
    return 0;
}