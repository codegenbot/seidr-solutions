#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    { // Add '{' here
        while (index <= text.length() - target.length()) {
            if (text.substr(index, target.length()).compare(target) == 0) {
                indices.push_back(index);
                index += target.length();
            } else {
                index++;
            }
        }
    }
    return indices;
}

int gcd(int a, int b) { // Add '{' here
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // Add '}' here
}