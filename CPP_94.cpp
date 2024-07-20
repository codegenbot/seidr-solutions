Here is the completed code:

vector<bool> primeCheck(100001, true);
primeCheck[0] = primeCheck[1] = false;

for(int i=2;i*i<=100000;i++){
    if(primeCheck[i]){
        for(int j=i*i;j<=100000;j+=i){
            primeCheck[j] = false;
        }
    }
}

int maxPrime=0;
for(auto x:lst){
    if(x>0 && primeCheck[x]){
        maxPrime=x;
        break;
    }
}
int sumOfDigits=0;
while(maxPrime){
    sumOfDigits += (maxPrime % 10);
    maxPrime /= 10;
}
return sumOfDigits;