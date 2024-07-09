#include <string>
#include <iostream>

int count_upper(std::string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')){
            count++;
        }
    }
    return count;
}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int output = count_upper(input);
    std::cout << "Count of characters from A to U at even position is: " << output << std::endl;
    return 0;
}