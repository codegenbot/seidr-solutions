#include <vector>
using namespace std;

vector<int> substringIndices(string text, string target) {
    vector<int> indices;
    int j = 0; // Index for target
    for(int i = 0; i <= text.size() - target.size(); i++) {
        if(text.substr(i, 1) == target.substr(j, 1)) {
            if(j == target.size()-1) {
                indices.push_back(i);
                j = 0;
            } else {
                j++;
            }
        } else {
            j = 0;
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