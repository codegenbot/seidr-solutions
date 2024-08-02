````
string file_name_check(string file_name){
    int dot_position = file_name.find(".");
    if(dot_position == string::npos || dot_position > 0 && !isalpha(file_name[0])){
        return "No";
    }
    string before_dot = file_name.substr(0, dot_position);
    string after_dot = file_name.substr(dot_position + 1);
    int digit_count = count(before_dot.begin(), before_dot.end(), '0') + count(before_dot.begin(), before_dot.end(), '1') +
                       count(before_dot.begin(), before_dot.end(), '2') + count(before_dot.begin(), before_dot.end(), '3') +
                       count(before_dot.begin(), before_dot.end(), '4') + count(before_dot.begin(), before_dot.end(), '5') +
                       count(before_dot.begin(), before_dot.end(), '6') + count(before_dot.begin(), before_dot.end(), '7') +
                       count(before_dot.begin(), before_dot.end(), '8') + count(before_dot.begin(), before_dot.end(), '9');
    if(digit_count > 3 || after_dot != "txt" && after_dot != "exe" && after_dot != "dll"){
        return "No";
    }
    return "Yes";
}
```