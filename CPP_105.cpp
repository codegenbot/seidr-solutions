#include <string>
#include <map>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<int> numVec;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numVec.push_back(i);
        }
    }

    sort(numVec.begin(), numVec.end());
    reverse(numVec.begin(), numVec.end());

    vector<string> result;
    map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                 {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int i : numVec) {
        result.push_back(numMap[i]);
    }

    return result;
}