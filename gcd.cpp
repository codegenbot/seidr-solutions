#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;

std::vector<int> findIndices(string text, string target) {
    std::vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        int j = 0;
        while (j < target.length() && text[i + j] == target[j]) {
            j++;
            if (j == target.length()) {
                result.push_back(i);
                i += j;
                break;
            }
        }
        i++;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    std::vector<int> indices = findIndices(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}