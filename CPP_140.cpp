// Initialize the output string
    string result = "";
    
    // Initialize a variable to store the consecutive spaces count
    int spacesCount = 0;
    
    // Loop through each character in the input text
    for(char c : text){
        if(c == ' '){
            spacesCount++;
            if(spacesCount > 2){
                if(result.back() != '-'){ // Avoid adding multiple consecutive dashes
                    result.push_back('-');
                }
            }
            else{
                result.push_back('_');
            }
        }
        else{
            result.push_back(c);
            spacesCount = 0;
        }
    }
    
    return result;
}