string file_name_check(string file_name){
    int count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c>='0' && c<='9')count++;
        if(c=='.')found_dot=true;
    }
    if(count > 3 || !found_dot || (i>1 && file_name[0]<'a' || file_name[0]>'z' && file_name[0]<'A' || file_name[0]>'Z') 
       return "No";
    int pos = file_name.find('.');
    if(pos<0)return "No";
    string ext = file_name.substr(pos+1);
    if(ext!="txt" && ext!="exe" && ext!="dll")return "No";
    return "Yes";
}