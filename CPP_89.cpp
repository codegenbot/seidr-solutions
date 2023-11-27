#include <string>
#include <cassert>

std::string encrypt(std::string s);

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    std::string encrypted = encrypt(s);
    std::cout << "Encrypted string: " << encrypted << std::endl;

    return 0;
}

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = (c - 'a' + 2 * 2) % 26 + 'a';
            }
            else{
                c = (c - 'A' + 2 * 2) % 26 + 'A';
            }
        }
        encrypted += c;
    }
    return encrypted;
}