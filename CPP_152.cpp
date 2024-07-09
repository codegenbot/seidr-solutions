#include <vector>
using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [b](int x) { return count(b.begin(), b.end(), x) > 0; });
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    assert(isSame({1,2,3,5},{-1,2,3,4}) == vector<int>({2,0,0,1}));
    return 0;
}