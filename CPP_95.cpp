int main() {
    map<string,string> dict;
    string key;
    
    cout << "Enter a dictionary of word-meanings (format: word meaning, each pair on a new line). Type 'stop' to finish input." << endl;
    
    while(true){
        cin >> key >> string();
        if(key == "stop") break;
        dict.insert({key,""});
    }
    
    if(check_dict_case(dict)){
        cout << "The case is consistent!" << endl;
    }else{
        cout << "The case is not consistent!" << endl;
    }
    
    return 0;
}