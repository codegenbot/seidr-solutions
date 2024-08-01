int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst) {
        if(i > 1) {
            bool isPrime = true;
            for(int j = 2; j * j <= i && isPrime; j++) {
                if(i % j == 0) {
                    isPrime = false;
                }
            }
            if(isPrime) {
                maxPrime = i;
                break;
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0) {
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter number of integers: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter integer " << (i+1) << ": ";
        cin >> lst[i];
    }
    cout << "Sum of digits of the largest prime number is: " << skjkasdkd(lst);
    return 0;
}