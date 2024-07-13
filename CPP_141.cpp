Here is the completed code:

```cpp
bool hasDigit = false;
int dotCount = 0;

for(char c : file_name){
    if(c == '.'){
        dotCount++;
        if(dotCount > 1) return "No";
    } else if(c >= '0' && c <= '9') {
        hasDigit = true;
        if(hasDigit && file_name.find('.') != string::npos) return "No";
    }
}

if(!isalpha(file_name[0])) return "No";

string ext = file_name.substr(file_name.find('.') + 1);
if(ext != "txt" && ext != "exe" && ext != "dll") return "No";

return "Yes";