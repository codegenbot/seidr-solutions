#include <map>
#include <string>

bool issame(std::map<char,int> a, std::map<char,int> b){
    return a == b;
}

std::map<char,int> histogram(std::string test){
    std::map<char,int> result;
    std::string letter;
    int count = 0;
    
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(letter.length() > 0){
                result[letter[0]]++;
                count = std::max(count, result[letter[0]]);
                letter = "";
            }
        }
    }
    
    if(letter.length() > 0){
        result[letter[0]]++;
        count = std::max(count, result[letter[0]]);
    }
    
    std::map<char,int> output;
    for(auto it=result.begin(); it!=result.end(); it++){
        if(it->second == count){
            output.insert(std::make_pair(it->first, it->second));
        }
    }
    
    return output;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}) == true);
    
    return 0;
}