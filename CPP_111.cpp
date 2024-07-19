```
#include <map>
#include <vector>
#include <string>

using namespace std;

// Define the histogramTest function
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

// Define the issame function
bool issame(map<char,int> a, map<char,int> b) {
    return a==b;
}

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