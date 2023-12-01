#include <string>
#include <cassert>

using namespace std;

int hex_key(string num){
    int count = 0;
    string primes = "2357BD";
    
    for(int i=0; i<num.length(); i++){
        if(primes.find(num[i]) != string::npos){
            count++;
        }
    }
    
    return count;
}

int main(){
    assert (hex_key("") == 0);
    // Add more test cases here to test the code further
    
    return 0;
}