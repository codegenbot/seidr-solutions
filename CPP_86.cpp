#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string anti_shuffle(const string& str) {
    if (str.length() <= 1) {
        return str;
    }
    int n = str.length();
    for(int i = 0; i < n; ++i) {
        if(str[i] == ' ') { 
            return "";
        }
    }
    string result = str;
    for(int i = 1; i < n; ++i) {
        int j = rand() % (i + 1);
        char temp = result[j];
        result[j] = result[i];
        result[i] = temp;
    }
    return result;
}

int main() {
    srand(time(0));
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}