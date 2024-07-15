#include <string>
using namespace std;

string concatenate(vector<string> strings){
    string result;
    for(const string& s : strings){
        result += s;
    }
    return result;
}

int main() {
    vector<string> strings = {"Hello, ", "world!"};
    cout << concatenate(strings);
    return 0;
}