Here is the completed code:

string file_name_check(string file_name){
    int digitCount = 0;
    bool dotFound = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digitCount++;
        }else if(file_name[i] == '.'){
            dotFound = true;
        }
    }

    if(digitCount > 3 || !dotFound) return "No";
    
    string firstPart = file_name.substr(0, file_name.find('.'));
    if(firstPart.empty() || !isalpha(firstPart[0])) return "No";

    string secondPart = file_name.substr(file_name.find('.')+1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if(find(validExtensions.begin(), validExtensions.end(), secondPart) == validExtensions.end()) 
        return "No";
    
    return "Yes";
}