Here is the completed code:

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i=lst[0];i<=*max_element(lst.begin(), lst.end());i++){
        bool isPrime = true;
        if(i<2) continue;
        for(int j=2;j*j<=i;j++) if(i%j==0) {isPrime=false;break;}
        if(isPrime && i>maxPrime) maxPrime=i;
    }
    int sumOfDigits = 0;
    while(maxPrime){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;