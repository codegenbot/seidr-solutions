```cpp
int digit_count = 0;
bool has_dot = false;
size_t dot_position = string::npos;

for (char c : file_name) {
    if (isdigit(c)) {
        digit_count++;
        if (digit_count > 3) return "No";
    } else if (c == '.') {
        has_dot = true;
        dot_position = file_name.find(c);
    }
}

if (!has_dot || dot_position == string::npos || !file_name.substr(0, dot_position).front() >= 'A' && !file_name.substr(0, dot_position).front() <= 'Z') return "No";

string extension = file_name.substr(dot_position + 1);

if (extension != "txt" && extension != "exe" && extension != "dll") return "No";

return "Yes";