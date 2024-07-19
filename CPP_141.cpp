int dotPosition = file_name.find('.');
    if(dotPosition == string::npos || dotPosition == 0 || dotPosition == file_name.length()-1) return "No";
    
    string beforeDot = file_name.substr(0, dotPosition);
    string afterDot = file_name.substr(dotPosition+1);

    if(beforeDot.empty() || !isalpha(beforeDot[0])) return "No";
    if(count_if(afterDot.begin(), afterDot.end(), ::isdigit) > 3) return "No";
    
    if(afterDot == "txt" || afterDot == "exe" || afterDot == "dll")
        return "Yes";
    
    return "No";
}