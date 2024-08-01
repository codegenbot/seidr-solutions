#include <string>
#include <cassert>

string encode_cyclic(string s){
    string output;
    for (int i = 0; i < s.length(); i++)
    {
        output += s[(i + 2) % s.length()];
    }
    return output;
}