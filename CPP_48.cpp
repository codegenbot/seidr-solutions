string temp = text;
bool result = true;

for(int i=0; i<temp.length()/2; i++){
    if(temp[i] != temp[temp.length()-1-i]){
        result = false;
        break;
    }
}

return result;