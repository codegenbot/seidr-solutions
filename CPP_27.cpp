string flip_case(string str){
  string result = "";
  for(int i = 0; i < str.length(); i++){
    if(isupper(str[i])){
      result += tolower(str[i]);
    }
    else if(islower(str[i])){
      result += toupper(str[i]);
    }
    else{
      result += str[i];
    }
  }
  return result;
}