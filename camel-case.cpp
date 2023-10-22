#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(ll i=0; i<n; i++)
#define fr1(i,n) for(ll i=1; i<=n; i++)
#define ll long long int
#define ld long double
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,n)cin>>a[i]
#define output(a,n) fr(i,n)cout<<a[i]<<" "
#define dbg cout<<"hurr"<<endl;
#define dbg2 cout<<"hurr2"<<endl;
#define md 998244353
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string name;
    cin >> name;
    vector<string> f;
    string tp = "";
    ll i = 0;
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            tp+=name[i];
            continue;
        }
        if(i==1)
        {
            if(name[i]!='a' && name[i]!='e' && name[i]!='i' && name[i]!='o' && name[i]!='u')
            {
                tp+=name[i];
                continue;
            }
            else
            {
                f.pb(tp);
                tp="";
                tp+=name[i];
                continue;
            }
        }
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            f.pb(tp);
            tp="";
            tp+=name[i];
            continue;
        }
        if(name[i]!='a' && name[i]!='e' && name[i]!='i' && name[i]!='o' && name[i]!='u')
            tp+=name[i];
        else{
            f.pb(tp);
            tp="";
            tp+=name[i];
        }

    }
    if(i==n)
        f.pb(tp);
    string ans="";
    fr(i,f.sz)
    {
        if(!i)
        {
            ans+=f[i];
            continue;
        }
        ans+=f[i];
    }
    for(ll i=0; i<ans.sz; i++)
    {
        if(i==0)
            {
                cout << (char)(toupper(ans[i]));
                continue;
            }
        if(ans[i]=='a' || ans[i]=='e' || ans[i]=='i' || ans[i]=='o' || ans[i]=='u')
            cout << (char)(tolower(ans[i]));
        else
            cout << (char)(toupper(ans[i]));
    }
}
