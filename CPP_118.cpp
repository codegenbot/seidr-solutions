string vowels = "aeiouAEIOU";
string result = "";

for(int i = word.size()-2; i >= 1; i--){
    if(vowels.find(word[i]) != string::npos && 
       !vowels.find(word[i-1]) && !vowels.find(word[i+1])){
           result = word[i];
           break;
       }
}

return result;