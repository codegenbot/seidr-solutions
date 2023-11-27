#include <iostream>
#include <string>
#include <cstdio>

bool valid_date(std::string date){
    // Add appropriate implementation code here
    return true;
}

std::string get_date_input(){
    std::string date;
    // Add appropriate implementation code here
    return date;
}

int main(){
    std::string date = get_date_input();
    
    if(valid_date(date)){
        std::cout << "Valid date" << std::endl;
    }
    else{
        std::cout << "Invalid date" << std::endl;
    }
    
    return 0;
}