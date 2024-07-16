int digitCount = 0;
    for(char c : file_name) {
        if(isdigit(c)) {
            digitCount++;
        }
    }

    size_t dotPos = file_name.find('.');
    if(digitCount > 3 || dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if(!isalpha(beforeDot[0]) || afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    return "Yes";
}