```cpp
#include <initializer_list>
#include <map>
#include <vector>
#include <string>

using namespace std;

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

    assert(hist.size() == 1 && hist.begin()->first == 'a' && hist.begin()->second == 1);
}