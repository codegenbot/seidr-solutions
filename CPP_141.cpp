bool hasDigit = false;
int dotCount = 0;

for(char c : file_name){
    if(isdigit(c)){
        if(hasDigit) return "No";
        hasDigit = true;
    }else if(c == '.'){
        dotCount++;
        if(dotCount > 1) return "No";
    }
}

if(hasDigit && dotCount != 1) return "No";

string extension = "";
for(int i = file_name.find('.') + 1; i < file_name.length(); i++){
    extension += file_name[i];
}
extension = extensiontolower();

if(extension != "txt" && extension != "exe" && extension != "dll") return "No";

return "Yes";