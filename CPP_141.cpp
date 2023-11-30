string file_name_check(string file_name){
    int digitCount = 0;
    int dotCount = 0;
    string beforeDot = "";
    string afterDot = "";

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digitCount++;
        }
        else if(file_name[i] == '.'){
            dotCount++;
        }
        else if(dotCount == 0){
            beforeDot += file_name[i];
        }
        else{
            afterDot += file_name[i];
        }
    }

    if(digitCount > 3 || dotCount != 1 || beforeDot.length() == 0 || !(beforeDot[0] >= 'a' && beforeDot[0] <= 'z') && !(beforeDot[0] >= 'A' && beforeDot[0] <= 'Z')){
        return "No";
    }
    else if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
        return "No";
    }
    else{
        return "Yes";
    }
}