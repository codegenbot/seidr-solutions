map<char,int> histogram(string test){
   map<char,int> result;
   
   // Count the occurrence of each letter in the string
   for(char c : test){
      if(c != ' '){
         result[c]++;
      }
   }
   
   // Find the maximum count
   int maxCount = 0;
   for(pair<char,int> p : result){
      maxCount = max(maxCount, p.second);
   }

   // Find letters with maximum count
   map<char,int> finalResult;
   for(pair<char,int> p : result){
      if(p.second == maxCount){
         finalResult[p.first] = p.second;
      }
   }
   
   return finalResult;
}