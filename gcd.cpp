```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> indices;

    size_t pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        text.erase(0, pos + target.size());
    }

    for (int i : indices)
        cout << i << " ";

    return 0;
}