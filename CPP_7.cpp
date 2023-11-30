#include <vector>
#include <string>
using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> filteredStrings;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}