#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int length = target.length();
    
    for(int i=0; i<=text.length()-length; i++){
        bool match = true;
        for(int j=0; j<length; j++){
            if(text[i+j] != target[j]){
                match = false;
                break;
            }
        }
        
        if(match){
            result.push_back(i);
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
    int x, y;
    cin >> x >> y;

    vector<int> indices = indicesOfSubstring("Text", "Target");

    cout << gcd(x, y) << endl;
    for (auto i : indices) {
        cout << i << " ";
    }
    return 0;
}