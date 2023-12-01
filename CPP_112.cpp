vector<string> reverse_delete(string s,string c){
   vector<string> result;
   string temp;
   for(int i=0; i<s.length(); i++){
      if(c.find(s[i]) == string::npos){ // Check if the character in s is not present in c
         temp.push_back(s[i]); // Add the character to temp string
      }
   }
   string reverse_temp = temp; // Create a copy of temp string
   reverse(reverse_temp.begin(), reverse_temp.end()); // Reverse the temp string
   if(temp == reverse_temp){
      result.push_back(temp);
      result.push_back("True");
   }else{
      result.push_back(temp);
      result.push_back("False");
   }
   return result;
}