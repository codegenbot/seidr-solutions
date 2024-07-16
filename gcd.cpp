#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    for(int i = 0 ; i <= text.length() - len; i++){
        bool found = true;
        for(int j = 0; j < len; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
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
    vector<int> indices = indicesOfSubstring(text, target);
    for (auto i : indices)
        std::cout << i << " ";
    return 0;