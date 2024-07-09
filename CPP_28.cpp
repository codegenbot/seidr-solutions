```
#include <string>
#include <vector>
using namespace std;

string concatenate(vector<string> strings){
    string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    vector<string> vec = {"x", "y", "z", "w", "k"};
    cout << concatenate(vec) << endl;
    return 0;
}