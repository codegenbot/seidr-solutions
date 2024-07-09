```cpp
int digitCount = 0;
bool foundDot = false;
for(int i=0; i<file_name.length(); i++){
    char c = file_name[i];
    if(c >= '0' && c <= '9'){
        digitCount++;
    }else if(c == '.'){
        foundDot = true;
    }else if(foundDot){
        std::string extension = file_name.substr(i);
        int j = 0;
        while(j < extension.length() && (extension[j]<'a'||extension[j]>'z') && 
              (extension[j]<'A'||extension[j]>'Z')){
            j++;
        }
        if(extension.length()-j<4 || !std::equal(4-std::to_string(digitCount).length(), 4, std::string("0123456789").substr(0,4-digitCount))){
            return "No";
        } else {
            for(int k = j; k < extension.length(); k++){
                if(extension[k] >= '0' && extension[k] <= '9'){
                    digitCount++;
                }
            }
        }
    }
}
if(digitCount > 3 || !foundDot) return "No";
if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') return "No";
return "Yes";