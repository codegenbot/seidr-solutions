bool is_sorted(vector<int> lst){
   // Check if lst is sorted in ascending order
   for(int i = 1; i < lst.size(); i++){
      if(lst[i] < lst[i-1]){
         return false;
      }
   }
   
   // Check if lst has more than 1 duplicate of the same number
   for(int i = 0; i < lst.size(); i++){
      int count = 0;
      for(int j = 0; j < lst.size(); j++){
         if(lst[i] == lst[j]){
            count++;
         }
         if(count > 1){
            return false;
         }
      }
   }
   
   return true;
}