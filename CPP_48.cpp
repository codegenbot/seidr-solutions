```cpp
string temp = text;
for(int i=0; i<temp.length()/2; i++){
    if(temp[i] != temp[temp.length()-1-i]){
        return false;
    }
}
return true;```