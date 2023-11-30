vector<string> split_words(string txt){
  vector<string> words;
  string word = "";
  bool hasWhiteSpace = false;
  bool hasComma = false;
  
  for(int i=0; i<txt.length(); i++){
    if(txt[i] == ' '){
      hasWhiteSpace = true;
    }
    else if(txt[i] == ','){
      hasComma = true;
    }
    else{
      word += txt[i];
    }
    
    if((hasWhiteSpace && txt[i] == ' ') || (hasComma && txt[i] == ',')){
      words.push_back(word);
      word = "";
      hasWhiteSpace = false;
      hasComma = false;
    }
  }
  
  if(word != ""){
    words.push_back(word);
  }
  
  if(words.empty()){
    words.push_back(to_string(3));
  }
  
  return words;
}