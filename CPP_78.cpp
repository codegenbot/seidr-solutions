int hex_key(string num){
    int count = 0;

    // Loop through each character in the input string
    for(char c : num){
        // Check if the character is a prime hexadecimal digit
        if(c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D'){
            count++;
        }
    }

    return count;
}