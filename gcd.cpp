#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();
    
    for(int i=0; i<=n-m; i++){
        int j = 0;
        while(j<m && text[i+j] == target[j]){
            if(j==m-1){
                result.push_back(i);
                j = -1;
            }
            j++;
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
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);

    for(auto i: res){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}