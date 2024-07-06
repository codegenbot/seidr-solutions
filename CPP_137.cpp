```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    string s;
    cout << "Enter a number (or a floating point number followed by 'f') and press Enter: ";
    cin >> s;
    
    if (s.find('f') != string::npos) {
        float f = stof(s.substr(0, s.length() - 1));
        int i = static_cast<int>(f);
        cout << "You entered a number: " << f << endl;
        if (!isfinite(f)) 
            cout << "This is not a finite number. The function will treat it as 0.\n";
    } else {
        int i = stoi(s);
        cout << "You entered an integer: " << i << endl;
    }

    return 0;
}