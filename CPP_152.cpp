Here's the solution:

```cpp
#include <vector>
bool issame(vector<int> a,vector<int>b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            int count = 0;
            for(int j = 0;j<game.size();j++){
                if(game[j]==guess[j])
                    count++;
            }
            if(count==1)
                result.push_back(1);
            else
                result.push_back(0);
        }
    }
    return result;
}