#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    int count = 0;
    for(int i=0; i<=brackets.length(); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(not (correct_bracketing("<><><<><>><>>><>")));
    return 0;
}