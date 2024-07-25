#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int tar_len = target.length();

    for(int i=0; i+len-1<=len; ++i){
        bool found = true;
        for(int j=0; j<tar_len; ++j){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }

    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if(num2 == 0) cout << num1 << endl;
    else {
        int gcd = __gcd(num1, num2);
        cout << gcd << endl;
    }

    return 0;
}