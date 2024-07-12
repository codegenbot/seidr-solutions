#include <string>
#include <algorithm>
#include <set>

using namespace std;

int count_distinct_characters(string str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    set<char> s; 
    for (char c : temp) { 
        s.insert(c); 
    }
    return s.size(); 
}