```cpp
#include <vector>
#include <iostream>

using namespace std;

bool issame(int i1, int i2) {
    if(i1 == i2)
        return true;
    else 
        return false;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}

int main() {
    vector<int> g1 = {1, 2, 3};
    vector<int> g2 = {1, 4, 3};
    vector<int> res = compare(g1,g2);
    
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}