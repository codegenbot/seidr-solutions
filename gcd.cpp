#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> findIndices(std::string text, std::string target) {
    vector<int> indices;
    int length = target.length();
    for(int i=0; i<=text.length()-length; i++) {
        if(text.substr(i, length) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    cout << "GCD of 10 and 15 is: " << gcd(10, 15) << endl;

    string text = "Hello world, hello world!";
    string target = "hello";
    vector<int> indices = findIndices(text, target);
    for(int i : indices) {
        cout << "Target found at index: " << i << endl;
    }

    return 0;
}