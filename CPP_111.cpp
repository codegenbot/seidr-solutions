#include <map>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

bool issame(map<char,int> a, map<char,int> b) {
    if (a.size() != b.size()) return false;
    for (auto p : a) {
        if (b.find(p.first) == b.end() || b[p.first] != p.second) return false;
    }
    return true;
}

map<char,int> histogramTest(string s) {
    map<char,int> hist;
    for (char c : s) {
        if (hist.find(c) == hist.end())
            hist[c] = 1;
        else
            hist[c]++;
    }
    return hist;
}

int main() {
    string test;
    cout << "Enter a string: ";
    cin >> test;

    auto hist = histogramTest(test);

    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    if (!issame(hist, {{'a', 1}})) {
        return 0;
    }
}