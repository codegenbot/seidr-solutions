```cpp
int i = 0, j = 0;
while(i < file_name.length()){
    if(isdigit(file_name[i])){
        if (++j > 3) return "No";
    } else {
        if (file_name[i] == '.') {
            if (j != 1) return "No";
            break;
        }
        if (!isalpha((unsigned char)file_name[i])) return "No";
    }
    i++;
}
if (j > 3 || i == file_name.length() || j < 1) return "No";

string extension = file_name.substr(j);
if (extension != "txt" && extension != "exe" && extension != "dll") return "No";

return "Yes";