```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> temp;
    for(int i=0; i<n; i++){
        temp.push_back(i+1);
    }
    random_shuffle(temp.begin(),temp.end());
    return temp;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> pile = make_a_pile(n);
    vector<int> pile2 = make_a_pile(n);
    if(issame(pile, pile2)){
        cout << "The piles are the same." << endl;
    } else {
        cout << "The piles are not the same." << endl;
    }
    
}