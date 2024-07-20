string temp = text;
bool result = true;

for(int i=0; i<temp.length(); i++) {
    if(temp[i] != temp[temp.length()-i-1]) {
        result = false;
        break;
    }
}

return result;