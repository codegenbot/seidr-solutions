#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i<=n-m;i++){
        if(text.substr(i,m)==target){
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

    vector<int> indices = indicesOfSubstring("example", "exa");
    for(int i: indices) cout << i << " ";

    cout << "\n";
    cout << gcd(x, y);
    
    return 0;
}