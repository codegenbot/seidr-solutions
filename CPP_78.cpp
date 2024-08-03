#include <string>
#include <algorithm>

using namespace std;

int hex_key(string num){
    int count = 0;
    string hexDigits = "02357BD";
    
    for(char c : num){
        if(hexDigits.find(c) != string::npos){
            count++;
        }
    }
    
    return count;
}