#include <string>
using namespace std;

class correct_bracketing {
public:
    bool correct_bracketing(string brackets){
        int count = 0;
        for(int i=0; i<brackets.length(); i++){
            if(brackets[i] == '('){
                count++;
            }
            else if(brackets[i] == ')'){
                count--;
                if(count < 0){
                    return false;
                }
            }
        }
        return count == 0;
    }
};

int main() {
    correct_bracketing obj;
    assert (not (obj.correct_bracketing("()()(()())()))()")));
    return 0;
}