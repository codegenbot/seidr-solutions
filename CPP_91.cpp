```
#include <iostream>
using namespace std;

int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != string::npos) {
        if (S.substr(0, pos).length() == boredom.length() && S.substr(0, pos) == boredom) {
            count++;
            break;
        }
        // Remove this line
        // pos++;
    }
    return count;

}

int main(){
    cout << is_bored("You and I are going for a walk") << endl; 
    return 0;
}