#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for(int i = 0; i <= text.length() - targetLen; i++){
        if(text.substr(i, targetLen) == target){
            indices.push_back(i);
            // check for overlapping targets
            while(i + targetLen < text.length() && text.substr(i, targetLen) == target){
                i += targetLen;
            }
        }
    }
    return indices;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    // your code for calculating gcd
    long a = max(num1, num2);
    long b = min(num1, num2);
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << endl;

    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> result = findIndices(text, target);
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}