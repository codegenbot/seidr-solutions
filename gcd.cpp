#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while (true) {
        index = text.find(target, index);
        
        if (index == string::npos) break; // target not found in the remaining text
        
        result.push_back(index); // record the current index
        index += target.length(); // move forward by the length of the target string
    }
    
    return result;
}

int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << greatestCommonDivisor(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    
    return 0;
}