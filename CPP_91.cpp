#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string boredom = "I";
    string S;
    cout << "Enter a sentence: ";
    cin >> S;

    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }

    cout << "Count: " << count << endl;

    return 0;
}

int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }
    return 0; // this function doesn't need to return the result
}