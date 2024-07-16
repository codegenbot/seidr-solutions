#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

vector<int> indicesOfSubstring(std::string text, std::string target) {
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

}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}