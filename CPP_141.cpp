Here is the completed code:

```cpp
bool has_digits = false;
int dot_count = 0;

for(int i = 0; i < file_name.size(); i++) {
    if(isdigit(file_name[i])) {
        if(has_digits) return "No";
        has_digits = true;
    } else if(file_name[i] == '.') {
        dot_count++;
    }
}

if(dot_count != 1 || !has_digits || (file_name[0] < 'a' && file_name[0] > 'z') && (file_name[0] < 'A' && file_name[0] > 'Z')) return "No";

string extension = "";
for(int i = file_name.find('.') + 1; i < file_name.size(); i++) {
    if(file_name[i] == '.') break;
    extension += file_name[i];
}

if(extension != "txt" && extension != "exe" && extension != "dll") return "No";

return "Yes";