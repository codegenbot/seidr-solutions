#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int prevLast = -1;
    while (true) {
        size_t last = text.find(target, prevLast + 1);
        if (last == string::npos)
            break;
        indices.push_back(last);
        prevLast = last;
    }
    return indices;
}

int main() {
    string text;
    getline(cin, text);

    string target;
    getline(cin, target);

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}