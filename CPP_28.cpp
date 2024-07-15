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
    vector<string> words = {"Hello", "World", "from", "C++"};
    string concatenated = concatenate(words);
    
    cout << concatenated << endl;
    
    return 0;
}