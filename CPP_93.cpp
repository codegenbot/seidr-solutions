#include <iostream>
#include <string>
#include <cassert>

std::string encode(std::string message);

int main(){
    assert(encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg");
    return 0;
}

std::string encode(std::string message){
    // Your implementation here
    return message; // Temporary: return the message as-is
}