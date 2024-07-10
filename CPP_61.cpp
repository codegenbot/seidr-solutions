int i = 0;
while(i < brackets.length()) {
    if(brackets[i] == '(') {
        for(int j = i+1; j < brackets.length(); j++) {
            if(brackets[j] == ')') {
                i = j + 1;
                break;
            }
        }
        if(j == brackets.length()) return false;
    } else {
        i++;
    }
}
return true;