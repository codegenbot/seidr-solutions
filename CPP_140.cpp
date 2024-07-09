#include <string>
#include <cassert>

string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            int count = 1;
            while(i+1 < text.length() && text[i+1] == ' '){
                text.replace(i, 2, "-");
            }
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("hello  world  !") == "hello__world_-!");
    assert(fix_spaces("   this   is   a   test   ") == "---this---is---a---test---");
    
    return 0;
}