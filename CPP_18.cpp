#include <string>

using namespace std;

int how_many_times(string str, string substring);

int main() {
    string str;
    string substring;
    cin >> str >> substring;
    cout << how_many_times(str, substring) << endl;
    return 0;
}