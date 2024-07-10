#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // to avoid overlapping matches
    }
    return result;
}

int main() {
    // You can test your function here.
    return 0;
}