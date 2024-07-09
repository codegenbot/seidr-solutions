#include <string>
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    string boredom = "I";
    cout << "Enter a sentence: ";
    getline(cin, boredom);

    size_t pos = 0;
    while ((pos = boredom.find(" ", pos)) != string::npos) {
        if (boredom.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }

    cout << "Count: " << count << std::endl;

    return is_bored(boredom);
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
    return count;
}