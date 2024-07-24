#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++) {
        bool match = true;
        for(int j=0; j<targetLen; j++) {
            if(text[i+j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) {
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