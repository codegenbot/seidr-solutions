#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

int count_distinct_characters(std::string str){
    std::vector<char> distinctChars;
    
    for(int i=0; i<str.length(); i++){
        char ch = std::tolower(str[i]);
        
        if(std::find(distinctChars.begin(), distinctChars.end(), ch) == distinctChars.end()){
            distinctChars.push_back(ch);
        }
    }
    
    return distinctChars.size();
}

int main(){
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}