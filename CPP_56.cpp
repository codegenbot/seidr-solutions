bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if ((bracket == '(') || (bracket == '{') || (bracket == '<')) {
            count++;
        } else if ((bracket == ')') || (bracket == '}') || (bracket == '>')) {
            if (count > 0)
                count--;
            else
                return count > 0 ? false : true; 
        }
    }
    return count > 0 ? false : true;
}