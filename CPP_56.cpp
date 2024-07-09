int i = 0, count = 0;

while(i < brackets.size()) {
    if(brackets[i] == '<') {
        count++;
    } else if(brackets[i] == '>') {
        if(count <= 0) return false;
        count--;
    }
    i++;
}
return count == 0;