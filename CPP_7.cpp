Here is the corrected code:

```cpp
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (auto s : a) if (find(b.begin(),b.end(),s) == b.end()) return false;
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;

int main() {
    vector<string> output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    cout << "Output: ";
    for(auto str : output) {
        cout << str << " ";
    }
    cout << endl;
}