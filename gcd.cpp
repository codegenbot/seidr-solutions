#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int tar_len = target.length();

    for(int i = 0; i <= len - tar_len; i++) {
        if(text.substr(i, tar_len) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;