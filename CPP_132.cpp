#include <string>
using namespace std;

bool is_nested(string str){
    int count = 0;
    for(char c : str){
        if(c == '['){
            count++;
        } else if(c == ']' && count){
            count--;
        }
    }
    
    return (str.size() > 2 && count > 0);
}