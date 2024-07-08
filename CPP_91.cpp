```cpp
#include <string>
using namespace std;

int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while((pos = S.find("I", pos)) != string::npos) {
        if (S[pos] == '.' || S[pos] == '?' || S[pos] == '!') 
            count++;
        pos++;
    }
    return count;

}

int main() {
    string S;
    cout << "Enter a sentence: ";
    cin >> S;
    int res = is_bored(S);
    cout << "Number of sentences starting with 'I' and ending with '.', '?', or '!': " << res << endl;
}