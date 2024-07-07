Here is the completed code:

```cpp
int hex_key(string num){
    int count = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i] >= '2' && num[i] <= '7' || (num[i] >= 'B' && num[i] <= 'F')){
            bool isPrime = true;
            for(int j = 2; j*j<=num[i]-'A'+11 && isPrime; j++) {
                if((num[i]-'A'+11)%j == 0) {
                    isPrime = false;
                }
            }
            if(isPrime) count++;
        }
    }
    return count;
}