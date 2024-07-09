Here is the completed code:

string file_name_check(string file_name){
    bool isValid = true;
    
    int count = 0;
    for(int i=0;file_name[i];i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3)
                return "No";
        }
    }
    
    if(count > 0) 
        return "No";
    
    size_t found = file_name.find('.');
    if(found == string::npos || found+1 >= file_name.size())
        return "No";
    
    size_t firstDotPos = file_name.find('.');
    string beforeDot = file_name.substr(0,firstDotPos);
    string afterDot = file_name.substr(firstDotPos+1);
    
    if(!isalpha(beforeDot[0]))
        return "No";
    
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll")
        return "No";
    
    return "Yes";