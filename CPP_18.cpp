#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string substring;
    cout << "Enter the substring: ";
    cin >> substring;
    int count = how_many_times(str, substring);
    cout << "The substring appears " << count << " times." << endl;
    return 0;
}

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        ++count;
        pos += substring.size();
    }
    return count;
}