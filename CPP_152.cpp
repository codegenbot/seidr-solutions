#include <vector>
#include <cmath>

using namespace std;

vector<int> compare(vector<int> scores, vector<int> guesses) {
    vector<int> results;
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] == guesses[i]) {
            results.push_back(0);
        } else {
            results.push_back(abs(scores[i] - guesses[i]));
        }
    }
    return results;
}