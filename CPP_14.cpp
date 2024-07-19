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

int main() {
    string input;
    cin >> input;
    vector<string> prefixes = all_prefixes(input);

    for (const auto& prefix : prefixes) {
        cout << prefix << " ";
    }
    cout << endl;

    return 0;
}