#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    // test cases
    cout << findIndices("a", "a").size() << endl;  // output: 1
    cout << findIndices("!", "!") << endl;  // output: 0 1
    cout << findIndices("rnm,xcnwqnd@#$fwkdjn3", "r") << endl;  // output: 0
    cout << findIndices("hihihihihihihihihihi", "hi") << endl;  // output: 0
    cout << findIndices("############", "#") << endl;  // output: 12 0 1 2 3 4 5 6 7 8 9 10 11

    return 0;
}