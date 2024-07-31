#include <string>
#include <cassert>

std::string encode(std::string message);

int main(){
    std::string message = "Hello, World!";
    std::string encoded = encode(message);
    assert(encoded == "H2e2l2o, W4o2r2l4d1!");
}

std::string encode(std::string message){
    std::string encoded_message;
    for (size_t i = 0; i < message.size(); ++i){
        int count = 1;
        while(i + 1 < message.size() && message[i] == message[i + 1]){
            ++count;
            ++i;
        }
        encoded_message += message[i] + std::to_string(count);
    }
    return encoded_message;
}  