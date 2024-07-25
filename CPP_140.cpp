char prev = ' ';
int count = 0;
string result = "";
for(char& c : text){
    if(c == ' '){
        count++;
        if(count > 2){
            if(prev != '-'){
                result.pop_back();
                result += '-';
            }
        } else {
            result += '_';
        }
    } else {
        result += c;
        count = 0;
    }
    prev = c;
}
return result;
}