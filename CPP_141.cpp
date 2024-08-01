Here is the solution:

```cpp
string file_name_check(string file_name){
    int count = 0, dot_count = 0;
    bool start_with_letter = false;
    
    for(int i=0; i<file_name.size(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1){
                return "No";
            }
        }
        else{
            start_with_letter = true;
        }
    }
    
    string extension = "";
    for(int i=file_name.size()-1; i>=0; i--){
        if(file_name[i] == '.'){
            break;
        }
        else{
            extension = file_name[i]+extension;
        }
    }
    
    if(extension.size() > 3){
        return "No";
    }
    else if(count > 3 || !start_with_letter){
        return "No";
    }
    else if(find({"txt", "exe", "dll"}, &(*extension.begin())) == ("dll").end()){
        return "Yes";
    }
    else{
        return "No";
    }
}