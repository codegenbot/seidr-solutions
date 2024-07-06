int i = 0;
while(i < brackets.length()) {
    if(brackets[i] == '(') {
        for(int j = i+1; j < brackets.length(); j++) {
            if(brackets[j] == ')') {
                i = j + 1;
                break;
            }
        }
        if(i >= brackets.length() || brackets[i] == ')') {
            return false;
        }
    } else {
        for(int j = i; j < brackets.length(); j++) {
            if(brackets[j] == '(') {
                i = j;
                break;
            }
        }
        if(i >= brackets.length()) {
            return false;
        }
    }
}
return true;