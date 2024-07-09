```cpp
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "None";
    
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while(*ptr) MD5_Update(&md5, ptr, 1); 
    MD5_Final(result,&md5);

    stringstream ss;
    for(int i=0; i<16; ++i){
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}