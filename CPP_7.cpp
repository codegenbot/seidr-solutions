```cpp
#include <vector>
#include <set>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings = {"hello", "world", "hell", "wow"};
    string substring = "ell";
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if(issame(strings, filtered_strings)) {
        cout << "The original and the filtered lists are same." << endl;
    } else {
        cout << "The original and the filtered lists are not same." << endl;
    }

    return 0;
}