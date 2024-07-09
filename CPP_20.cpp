#include <vector>
using namespace std;

bool isSame(vector<float> a, vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;

int main(){
    int n;
    cin >> n;
    vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    if(isSame(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}