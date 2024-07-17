#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        int tempIndex = index;
        
        while (tempIndex < text.length() && text.substr(tempIndex, target.length()).compare(target) == 0) {
            result.push_back(tempIndex);
            tempIndex += target.length();
        }
        
        if (text[index] != '\0') {
            index++;
        } else {
            break;
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

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}