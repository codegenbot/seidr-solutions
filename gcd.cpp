#include <initializer_list>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            result.push_back(i);
            i += target.length();
        } else {
            i++;
        }
    }
    return result;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int i = 0;
    while (i <= text.length() - target.length()) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            indices.push_back(i);
            i += target.length();
        } else {
            i++;
        }
    }
    return indices;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;