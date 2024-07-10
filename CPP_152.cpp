#include <vector>
using namespace std;

int main() {
    vector<vector<bool>> result;
    for (const auto& p : {{1,2,3,5},{-1,2,3,4}}) {
        vector<bool> temp;
        for (int i = 0; i < p.size(); i++) {
            if(p[i] == 1){
                temp.push_back(p[i] == -1 || p[i+1] != p[0]+i);
            } else {
                temp.push_back(p[i] == p[0]+(i-1));
            }
        }
        result.push_back(temp);
    }
    for (const auto& r : result) {
        for (bool b : r) {
            cout << (b ? 0 : 1);
        }
        cout << endl;
    }
    return 0;
}