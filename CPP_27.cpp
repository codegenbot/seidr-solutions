using namespace std;

string flip_case(string str){
    string result = "";
    
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        
        if(isalpha(c)){
            if(isupper(c)) 
                c = tolower(c);
            else
                c = toupper(c);
            
            result += c;
        }
        else
            result += c;
    }
    
    return result;
}