#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int count = count_upper(s);
    cout << "Count of upper vowels: " << count << endl;
    return 0;
}