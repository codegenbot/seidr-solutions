#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for (int i = 0; ; i++) {
        int j = 0;
        while (j < targetLength && i + j < text.length() && text[i + j] == target[j]) {
            j++;
        }
        if (j == targetLength) {
            indices.push_back(i);
            i += j - 1; 
        } else {
            break;
        }
    }
    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}