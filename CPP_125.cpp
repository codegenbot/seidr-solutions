vector<string> split_words(string txt){
   vector<string> result;
   string word = "";
   
   char delimiter = ' ';
   if(txt.find(',') != string::npos){
      delimiter = ',';
   }
   
   for(char c : txt){
      if(c == delimiter){
         if(!word.empty()){
            result.push_back(word);
            word = "";
         }
      }else{
         word += c;
      }
   }
   
   if(!word.empty()){
      result.push_back(word);
   }
   
   if(result.empty()){
      result.push_back(to_string(('z' - 'a') / 2));
   }
   
   return result;
}