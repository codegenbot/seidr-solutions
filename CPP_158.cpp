string find_max(vector<string> words){
  string max_word = "";
  int max_unique = 0;

  for(string word : words){
    int unique_chars = 0;
    bool visited[26] = {false}; //assuming only lowercase characters are present

    for(char c : word){
      int index = c - 'a';
      if(!visited[index]){
        visited[index] = true;
        unique_chars++;
      }
    }

    if(unique_chars == max_unique){
      max_word = min(max_word, word);
    }
    else if(unique_chars > max_unique){
      max_word = word;
      max_unique = unique_chars;
    }
  }

  return max_word;
}