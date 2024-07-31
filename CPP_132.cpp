```cpp
#include <string>

using namespace std;

bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 1) return true;
            count--;
        }
    }
    return false;

}

int main() {
    string input;
    cin >> input;  
    bool result = is_nested(input);  
    cout << (result ? "True" : "False");  
    return 0;  
}