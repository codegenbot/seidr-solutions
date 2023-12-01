map<char,int> histogram(string test){
  map<char,int> result;
  string word;
  for(char c : test){
    if(c != ' '){
      word += c;
    }else{
      result[word]++;
      word = "";
    }
  }
  if(word != ""){
    result[word]++;
  }
  return result;
}