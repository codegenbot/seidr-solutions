#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<int> compare(vector<int> scores, vector<int> guesses) {
    vector<int> result;
    for(int i = 0; i < scores.size(); i++) {
        int diff = abs(scores[i] - guesses[i]);
        if (scores[i] == guesses[i]) {
            result.push_back(0);
        } else {
            result.push_back(diff);
        }
    }
    return result;
}