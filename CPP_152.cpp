#include <iostream>
#include <vector>
using namespace std;

bool isSame(vector<int> a,vector<int> b){
    for(int i = 0; i < a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;

}

vector<int> getResult(vector<int> game, vector<int> guess) {
    vector<int> result;
    if(isSame(game,guess)){
        for (int i = 0; i < game.size(); i++) {
            result.push_back(2);
        }
    } else {
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }
    return result;

}

int main() {
    int n;
    cin >> n;
    vector<int> game(n),guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    vector<int> res = getResult(game,guess);
    for(auto x:res)cout << x << " ";
    cout << endl;
    return 0;
}