#include<vector>
using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++)if(a[i]!=b[i]) return false;
    return true;
}

int main() {
    int n; cin>>n;
    vector<int> pile = make_a_pile(n);
    // use 'pile' here
    bool isPileGood = isSame(pile, make_a_pile(n));
    if(isPileGood) cout<<"The Pile is Good."<<endl;
    else cout<<"The Pile is Bad."<<endl;
    return 0;
}

vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile[i] = i * 2 + 1;
        } else {
            pile[i] = i * 2;
        }
    }
    return pile;
}