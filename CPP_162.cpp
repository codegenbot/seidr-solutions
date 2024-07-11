```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Enter a password: ";
    cin >> input;
    
    unsigned char md5[16];
    // Include your MD5 implementation here
    // For example, if you have a separate `md5.cpp` and `md5.h`
    // files in the same directory as your main program,
    // you would include them like this:
    #include "md5.h"
    MD5(input, md5);

    vector<string> result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(setw(2) << hex << setfill('0') << ((int)(md5[i])));

    cout << "MD5 Hash: ";
    for(string s : result){
        cout << s;
    }
    return 0;
}