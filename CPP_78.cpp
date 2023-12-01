#include <string>

int hex_key(std::string num){
    int count = 0;
    std::string primes = "2357BD";
    
    for(int i = 0; i < num.length(); i++){
        if(primes.find(num[i]) != std::string::npos){
            count++;
        }
    }
    
    return count;
}

int main(){
    std::string num;
    std::cin >> num;
    
    int count = hex_key(num);
    std::cout << count << std::endl;
    
    return 0;
}