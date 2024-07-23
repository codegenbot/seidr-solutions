#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
            while(i + m < n && text.substr(i,m) == target){
                i++;
                result.push_back(i);
            }
        }
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
    string text; 
    std::cout << "Enter the text: ";
    std::cin >> text;

    string target; 
    std::cout << "Enter the target: ";
    std::cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int a; 
    std::cout << "Enter number 1: ";
    std::cin >> a;
    int b; 
    std::cout << "Enter number 2: ";
    std::cin >> b;
    
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a,b) << std::endl;

    return 0;
}