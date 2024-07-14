#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i = 0; ;i++){
        if(i+n <= 0) break;
        int j = 0;
        while(j < m && text[i+j] == target[j]) j++;
        
        if(j == m){
            result.push_back(i);
            i += j;
        }else{
            if(i + j >= n) break;
            i += j;
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}