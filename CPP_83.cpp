#include <bits/stdc++.h>

using namespace std;

int starts_one_ends(int n) {
    if(n<10)
        return 1;
    int ans = 2;
    for(int i=1; i<=n-1; i++) {
        string str = to_string(i);
        if(str[0] == '1' || str[str.length()-1] == '1')
            ans += 9;
        else
            ans += (str.length()-1)*8 + 2;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
}