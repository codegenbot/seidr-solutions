```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    int n=s.length();
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not prime length";
            return 0;
        }
    }
    cout<<n<<" is prime length";
    return 0;
}