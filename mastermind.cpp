#include <vector>
#include <string>

int masterMind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    vector<vector<int>> codeIndex(6, vector<int>(4));
    for (int i = 0; i < 4; ++i)
        codeIndex[code[i] - '0' - 1][i]++;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i])
            blackPegs++;
        else {
            int index = codeIndex[guess[i] - '0' - 1][i];
            whitePegs += min(index, 1);
        }
    }

    for (int i = 0; i < 6; ++i)
        if (codeIndex[i].size() > blackPegs) {
            int j = 0;
            while (j < 4 && codeIndex[i][j] > 1 - blackPegs) j++;
            whitePegs += max(0, j);
        }

    return blackPegs + whitePegs;
}