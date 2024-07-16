#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while ((start = text.find(target, start)) != string::npos) {
        indices.push_back(start);
        start += 1; // Skip the current occurrence
    }
    return indices;
}