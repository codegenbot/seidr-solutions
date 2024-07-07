#include <vector>
#include <string>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
            // check for overlapping targets
            int start = i + targetLength;
            while(start <= text.length() - targetLength) {
                found = true;
                for(int j = 0; j < targetLength; j++) {
                    if(text[start+j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                if(found) {
                    indices.push_back(start);
                } else {
                    break;
                }
                start++;
            }
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}