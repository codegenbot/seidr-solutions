int main() {
    int skjkasdkd(vector<int> lst){
        int maxPrime = 0;
        for(int i : lst){
            if(i > 1 && isPrime(i)){
                if(maxPrime < i) maxPrime = i;
            }
        }
        int sumOfDigits = 0;
        while(maxPrime > 0){
            sumOfDigits += maxPrime % 10;
            maxPrime /= 10;
        }
        return sumOfDigits;
    }
}