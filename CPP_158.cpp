#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string find_max(vector<string> words) {
    string maxWord = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int countA = a.size();
            int countB = b.size();
            if (countA != countB)
                return countA > countB;
            int uniqueCountA = 0;
            for (char c : a) {
                if (c >= 'a' && c <= 'z') {
                    uniqueCountA++;
                    break;
                }
            }
            int uniqueCountB = 0;
            for (char c : b) {
                if (c >= 'a' && c <= 'z') {
                    uniqueCountB++;
                    break;
                }
            }
            return uniqueCountA > uniqueCountB;
        });
    return maxWord;
}