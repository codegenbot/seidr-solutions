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

int main() {
    std::string test;
    std::cout << "Enter a string: ";
    using namespace std;
    std::cin >> test;

    auto hist = histogramTest(test); 

    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    if (!issame(histogramTest("a"), {{'a', 1}})) { 
        return 0; 
    }
    
    return 0;
}