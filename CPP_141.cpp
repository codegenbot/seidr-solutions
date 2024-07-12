for(int i = 0; i < file_name.size(); i++){
    if(!isalnum(file_name[i]) && file_name[i] != '.')
        return "No";
    if(isalpha(file_name[i]) && dotCount == 0)
        return "No";
    if(file_name[i] == '.'){
        dotCount++;
        dotIndex = i;
    }
}
if(file_name.size() > 12)
    return "No";
if(dotCount != 1 || dotIndex == 0 || dotIndex == file_name.size() - 1)
    return "No";