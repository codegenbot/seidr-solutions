#include <string>

std::string string_xor(std::string a, std::string b);

std::string string_xor(std::string a, std::string b){
    std::string result = "";
    for(int i=0; i<a.size(); i++){
        if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1')){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    std::string input1, input2;
    std::cin >> input1 >> input2;
    std::string output = string_xor(input1, input2);
    std::cout << output;
    
    return 0;
}