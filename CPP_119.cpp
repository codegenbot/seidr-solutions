string match_parens(vector<string> lst){
    string s = lst[0] + lst[1]; // concatenate the two strings
    int count = 0; // to keep track of the balance between '(' and ')'
    
    // iterate over each character in the concatenated string
    for(int i=0; i<s.length(); i++){
        // if current character is '(' increase the count
        if(s[i] == '('){
            count++;
        }
        // if current character is ')' decrease the count
        else if(s[i] == ')'){
            count--;
        }
        
        // if count becomes negative at any point, it means ')' is encountered
        // before corresponding '(', so it is not possible to make a good string
        if(count < 0){
            return "No";
        }
    }
    
    // if count is zero at the end of loop, it means all parentheses are balanced
    if(count == 0){
        return "Yes";
    }
    
    // if count is positive, it means there are more '(' than ')' so it is not
    // possible to make a good string
    return "No";
}