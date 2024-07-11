```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "md5.h"

using namespace std;

void string_to_md5(string input, unsigned char* md5) {
    MD5(input.c_str(), strlen(input.c_str()), md5);
}

int main() {
    string input;
    cout << "Enter your password: ";
    getline(cin, input);
    
    unsigned char md5[16];
    string_to_md5(input, md5);

    vector<string> result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(setw(2) << hex << setfill('0') << (int)(md5[i]));
    
    cout << "MD5: ";
    for (string s : result) {
        cout << s;
    }
    cout << endl;

    return 0;
}