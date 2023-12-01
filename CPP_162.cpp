#include <iostream>
#include <string>
#include <sstream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text);

int main() {
    // Your code here
    return 0;
}

string string_to_md5(string text){
    if(text.empty()){
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    stringstream md5stream;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        md5stream << hex << (unsigned int)digest[i];
    }

    return md5stream.str();
}