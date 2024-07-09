#include <vector>
#include <string> // Added this include statement

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i<n-m+1; i++){
        if(text.substr(i,m).compare(target) == 0){
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
}