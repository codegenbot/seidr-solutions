#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int text_len = text.length();
    int target_len = target.length();

    for(int i=0; i<=text_len-target_len; i++){
        bool flag = true;
        for(int j=0; j<target_len; j++){
            if(text[i+j] != target[j]) {
                flag = false;
                break;
            }
        }
        if(flag) result.push_back(i);
    }
    
    return result;
}

int gcd(int a, int b) {
    while(b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if(num1 < 0 || num2 < 0) cout << "Please enter positive numbers." << endl;
    else{
        cout << gcd(num1, num2) << endl; // prints the greatest common divisor of the two input integers
    }

    return 0;
}