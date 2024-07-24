bool hasDigits = false;
int dotCount = 0;

for(char c : file_name) {
    if(isdigit(c)) {
        if(hasDigits) return "No";
        hasDigits = true;
    } else if(c == '.') {
        dotCount++;
    }
}

if(dotCount != 1) return "No";

string suffix = "";
for(int i = file_name.find('.') + 1; i < file_name.length(); i++) {
    suffix += file_name[i];
}

string validSuffixes[] = {"txt", "exe", "dll"};
bool isValidSuffix = false;
for(string s : validSuffixes) {
    if(suffix == s) {
        isValidSuffix = true;
        break;
    }
}

if(!hasDigits && dotCount == 1 && (file_name[0] >= 'a' && file_name[0] <= 'z') || (file_name[0] >= 'A' && file_name[0] <= 'Z') && isValidSuffix) {
    return "Yes";
} else {
    return "No";
}