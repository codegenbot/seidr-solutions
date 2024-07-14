#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

std::vector<int> findIndices(std::string text, std::string target) {
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
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> indices = findIndices(text, target);
    for (int i : indices)
        std::cout << i << " ";
    return 0;
}