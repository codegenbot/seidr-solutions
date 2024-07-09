#include <string>
#include <vector>

using namespace std;

vector<string> issame(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0, totalChars2 = 0;
    for (const string& str : lst1) {
        totalChars1 += str.size();
    }
    for (const string& str : lst2) {
        totalChars2 += str.size();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}