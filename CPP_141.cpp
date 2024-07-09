bool hasDigit = false;
int dotCount = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        if (!hasDigit) {
            hasDigit = true;
        }
        else {
            return "No";
        }
    }
    else if (c == '.') {
        dotCount++;
        if (dotCount > 1) {
            return "No";
        }
    }
}

if (file_name.find('.') == string::npos) {
    return "No";
}

string beforeDot = file_name.substr(0, file_name.find('.'));
string afterDot = file_name.substr(file_name.find('.') + 1);

if (!beforeDot.empty() && isalpha(beforeDot[0])) {
    if (afterDot == "txt" || afterDot == "exe" || afterDot == "dll") {
        return "Yes";
    }
}
else {
    return "No";
}