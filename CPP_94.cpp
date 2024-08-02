int main() {
    int skjkasdkd(vector<int> lst){
        int maxPrime = 0;
        for(int i = 0; i < lst.size(); i++){
            if(isPrime(lst[i])){
                if(lst[i] > maxPrime)
                    maxPrime = lst[i];
            }
        }
        int sumOfDigits = 0;
        while(maxPrime > 0){
            sumOfDigits += maxPrime % 10;
            maxPrime /= 10;
        }
        return sumOfDigits;
    }
    
    int result = skjkasdkd({127, 97, 8192});
    assert(result == 10);
}