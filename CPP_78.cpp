#include<stdio.h>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

int hex_key(string num) {
    int count = 0;
    for(int i=0; i<num.length();i++){
        if((num[i] >= '2' && num[i] <= '7') || (num[i] >= 'B'&& num[i] <= 'F')){
            bool isPrime = true;
            for(int j=2;j*j<=num[i]%10;j++)
                if(num[i]%j==0)
                    isPrime=false;
            if(isPrime)count++;
        }
    }
    return count;
}

int main(){
    // testing
    cout << hex_key("AB") << endl; // output should be 1
    cout << hex_key("1077E") << endl; // output should be 2
    cout << hex_key("ABED1A33") << endl; // output should be 4
    cout << hex_key("123456789ABCDEF0") << endl; // output should be 6
    cout << hex_key("2020") << endl; // output should be 2
    
    return 0;
}