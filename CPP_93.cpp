string encode(string message){
    string encodedMessage = "";

    for(int i = 0; i < message.length(); i++){
        if(isalpha(message[i])){
            if(islower(message[i])){
                encodedMessage += toupper(message[i]);
            }
            else{
                encodedMessage += tolower(message[i]);
            }

            if(message[i] == 'a'){
                encodedMessage += 'c';
            }
            else if(message[i] == 'A'){
                encodedMessage += 'C';
            }
            else if(message[i] == 'e'){
                encodedMessage += 'g';
            }
            else if(message[i] == 'E'){
                encodedMessage += 'G';
            }
            else if(message[i] == 'i'){
                encodedMessage += 'k';
            }
            else if(message[i] == 'I'){
                encodedMessage += 'K';
            }
            else if(message[i] == 'o'){
                encodedMessage += 'q';
            }
            else if(message[i] == 'O'){
                encodedMessage += 'Q';
            }
            else if(message[i] == 'u'){
                encodedMessage += 'w';
            }
            else if(message[i] == 'U'){
                encodedMessage += 'W';
            }
            else{
                encodedMessage += message[i];
            }
        }
        else{
            encodedMessage += message[i];
        }
    }

    return encodedMessage;
}