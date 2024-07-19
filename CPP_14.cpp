#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool are_same(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main(){
    vector<string> prefixes = all_prefixes("WWW");
    vector<string> expected = {"W", "WW", "WWW"};

    if (are_same(prefixes, expected)) {
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }

    return 0;
}