#include<iostream>
#include<string>
using namespace std;

int how_many_times(string str, string substring) {
    if (substring.empty()) {
        return 0;
    }
    
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        count++;
        pos++;
    }
    
    return count;
}

int main() {
    cout << how_many_times("", "a") << endl;
    cout << how_many_times("aaa", "a") << endl;
    cout << how_many_times("aaaa", "aa") << endl;
    
    return 0;
}