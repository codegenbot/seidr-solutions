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
    vector<int> lst = {1,2,3,4,5};
    cout << skjkasdkd(lst);
    return 0;
}