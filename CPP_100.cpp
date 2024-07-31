#include <vector>

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n);

int main(){
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}