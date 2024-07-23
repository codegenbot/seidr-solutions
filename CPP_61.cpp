```cpp
bool correct_bracketing(const std::string& brackets) {
    unsigned int count = 0;
    for(unsigned int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')count++;
        else if(brackets[i] == ')')if(count > 0)count--; 
    }
    return count==0;
}