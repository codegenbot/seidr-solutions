string fix_spaces(string text){
  int consecutive_spaces = 0;
  for(int i=0; i<text.length(); i++){
    if(text[i] == ' '){
      consecutive_spaces++;
      if(consecutive_spaces > 2){
        text.replace(i, 1, "-");
        consecutive_spaces = 0;
      }
      else{
        text.replace(i, 1, "_");
      }
    }
    else{
      consecutive_spaces = 0;
    }
  }
  return text;
}