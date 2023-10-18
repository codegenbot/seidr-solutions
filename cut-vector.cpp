#include <fstream>
#include <iostream> 
#include <string> 
#include <sstream> 
#include <vector> 

using namespace std; 

int main () {
    ifstream infile("test.txt");
    string line;
    vector<string> lines;
    while (getline(infile, line)) {
        lines.push_back(line);
    }

    for (int i = 0; i < lines.size(); i++) {
        cout << lines[i] << endl;
    }
}
