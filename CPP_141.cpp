Here is the completed code:

string file_name_check(string file_name){
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }else if(c == '.'){
            foundDot = true;
        }else if(c < 'a' || (c > 'z' && c < 'A') || c > 'Z'){
            return "No";
        }
    }
    if(digitCount > 3 || !foundDot) return "No";
    size_t dotPos = file_name.find('.');
    string extension = file_name.substr(dotPos+1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if(find(validExtensions.begin(), validExtensions.end(), extension) == validExtensions.end()) return "No";
    return "Yes";