#include <vector>
using namespace std;

vector<int> coinSums(int cents) {
    vector<int> result(4);
    
    for (int i = 0; i < 4; i++) {
        int val;
        switch(i) {
            case 0: val = 1; break;
            case 1: val = 5; break;
            case 2: val = 10; break;
            case 3: val = 25; break;
        }
        
        while (cents >= val) {
            cents -= val;
            result[i]++;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = coinSums(n);
    cout << res[0] << endl;
    cout << res[1] << endl;
    cout << res[2] << endl;
    cout << res[3] << endl;
    
    return 0;
}