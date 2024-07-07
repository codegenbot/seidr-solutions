#include <iostream>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    auto start = str.begin();
    while ((start += distance(str.begin(), str.find(substring, distance(start, str.end())))) 
           != str.end()) {
        count++;
        start += distance(str.begin(), str.find(substring, distance(start, str.end())));
    }
    return count;

}

int main() { 
    string str, substring;

    cout << "Enter the string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Error: The input string is empty." << endl;
    } else {
        cout << "Enter substring: ";
        getline(cin, substring);
        
        if (substring.empty()) {
            cout << "Error: The input substring is empty." << endl;
        } else {
            int result = how_many_times(str, substring);
            cout << "The substring appears " << result << " times." << endl;
        }
    }

    return 0;
}