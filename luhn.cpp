#include<iostream>
#include<vector>

int main(){
    std::vector<int> digits(16);
    
    for(int i=0; i<16; i++){
        std::cin >> digits[i];
    }
    
    int sum=0;
    for(int i=16-1; i>=0+1; i--){
        if(i%2==0){
            int doubledDigit=digits[i]*2;
            if(doubledDigit>9){
                doubledDigit-=9;
            }
            sum+=doubledDigit;
        }
        else{
            sum+=digits[i];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}