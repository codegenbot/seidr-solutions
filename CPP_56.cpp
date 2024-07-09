int i = 0;
while(i < brackets.size()){
    if(brackets[i] == '<'){
        for(int j = i+1; j < brackets.size(); ++j){
            if(brackets[j] == '>'){
                i = j + 1;
                break;
            }
        }
        if(j >= brackets.size()) return false;
    } else {
        i++;
    }
}
return true;