Here is the completed code:

```cpp
bool hasDigit = false;
int dotCount = 0;
for(int i=0; i<file_name.length(); i++){
    if(file_name[i] >= '0' && file_name[i] <= '9'){
        hasDigit = true;
    }
    else if(file_name[i] == '.'){
        dotCount++;
        if(dotCount > 1) return "No";
    }
}

if(hasDigit && file_name.length() - dotCount > 3) return "No";

string beforeDot = "";
for(int i=0; i<file_name.length(); i++){
    if(file_name[i] == '.'){
        break;
    }
    else{
        beforeDot += file_name[i];
    }
}

if(beforeDot.empty()) return "No";
if(!isalpha(beforeDot[0])) return "No";

string afterDot = "";
for(int i=file_name.length()-1; i>=0; i--){
    if(file_name[i] == '.'){
        break;
    }
    else{
        afterDot = file_name[i] + afterDot;
    }
}

if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";

return "Yes";