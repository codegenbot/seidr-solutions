#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int len = target.length();
    for(int i=0; i<=text.length()-len; i++){
        if(text.substr(i,len) == target){
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}