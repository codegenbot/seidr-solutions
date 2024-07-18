string output = "";
    int count = 0;
    for(char c : text){
        if(c == ' '){
            count++;
            if(count > 2){
                output += "-";
                count = 1;
            } else {
                output += "_";
            }
        } else {
            output += c;
            count = 0;
        }
    }
    return output;
}