#include <vector>
#include <string>
#include <cassert>
using namespace std;

string concatenate(const vector<string>& strings){
    string result = "";
    for (const string& s : strings) {
        result += s;
    }
    return result;
}

int main() {
    vector<string> strings;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        strings.push_back(input);
    }
    cout << concatenate(strings) << endl;
    return 0;
}