#include <string>
using namespace std;
bool correct_bracketing(string brackets){
    int open = 0, close = 0;
    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == '(') open++;
        else close++;
        if(open < close) return false;
    }
    return open == close;
}