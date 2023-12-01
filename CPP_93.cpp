string encode(string message){
    string encoded_msg = "";
    for (int i=0; i<message.length(); i++){
        char c = message[i];

        if (isalpha(c)){
            if (islower(c)){
                encoded_msg += toupper(c);
            }
            else{
                encoded_msg += tolower(c);
            }

            if (tolower(c) == 'a'){
                encoded_msg += 'c';
            }
            else if (tolower(c) == 'e'){
                encoded_msg += 'g';
            }
            else if (tolower(c) == 'i'){
                encoded_msg += 'k';
            }
            else if (tolower(c) == 'o'){
                encoded_msg += 'q';
            }
            else if (tolower(c) == 'u'){
                encoded_msg += 'w';
            }
            else{
                encoded_msg += c;
            }
        }
        else{
            encoded_msg += c;
        }
    }

    return encoded_msg;
}