#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 1){
            bool isPrime = true;
            for(int j=2; j*j<=lst[i]; j++){
                if(lst[i] % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && lst[i] > maxPrime){
                maxPrime = lst[i];
            }
        }
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}