bool is_nested(string str){
  
  int openCount = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '['){
      openCount++;
    }
    else if(str[i] == ']' && openCount > 0){
      openCount--;
    }
  }
  
  return openCount > 0;
}