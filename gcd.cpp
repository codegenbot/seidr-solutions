#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (start + target.size() <= text.size()) {
        if (text.substr(start, target.size()) == target) {
            indices.push_back(start);
            start += target.size();
        } else {
            start++;
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