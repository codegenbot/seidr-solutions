string match_parens(vector<string> lst){
    string s = lst[0] + lst[1]; // concatenate the two strings
    int count = 0; // variable to keep track of parentheses balance

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            count++; // increment count for open parentheses
        }
        else if(s[i] == ')'){
            count--; // decrement count for close parentheses
        }

        if(count < 0){
            return "No"; // if count becomes negative, parentheses are not balanced
        }
    }

    if(count == 0){
        return "Yes"; // if count is zero, parentheses are balanced
    }
    else{
        return "No"; // if count is not zero, parentheses are not balanced
    }
}