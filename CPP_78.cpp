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
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int result = hex_key(input);
    std::cout << "Number of hex characters: " << result << std::endl;

    return 0;
}