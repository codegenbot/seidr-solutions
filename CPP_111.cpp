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

// Define the compareHistograms function
bool compareHistograms(map<char,int> a, map<char,int> b) {
    // You probably want to compare two histograms character by character here
    // For now, just check if they are equal
    return a==b;
}

int main() {
    string test;
    cout << "Enter a string: ";
    cin >> test;

    auto hist = histogramTest(test); 

    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    if (!compareHistograms(hist, {{'a', 1}})) { 
        return 0; 
    }
}