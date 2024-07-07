char temp;
for(int i=0; i<str.length();i++){
    if(islower(str[i])){
        temp=str[i];
        for(int j='a';j<='z';j++){
            if(j==temp+32)break;
            else if(j==temp-32){
                str.replace(i,1,&'A');
                break;
            }
        }
    }else{
        temp=str[i];
        for(int j='A';j<='Z';j++){
            if(j==temp+32)break;
            else if(j==temp-32){
                str.replace(i,1,&'a');
                break;
            }
        }
    }
}
return str;