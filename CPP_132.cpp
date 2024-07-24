```cpp
int count_open = 0, count_close = 0;

for(int i=0; i<str.length(); i++){
    if(str[i] == '[') count_open++;
    else if(str[i] == ']') count_close++;

    if(count_open > 0 && count_close > 0){
        if(count_open < count_close) return true;
        else count_close--;
    }
}
return false;