#include <string>
#include <cassert>
using namespace std;

bool check_if_last_char_is_a_letter(const std::string& txt)
{
    if(txt.empty())
        return false;
    
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(' ') == txt.size() - 1)
            return true;
    }
    
    return false;
}