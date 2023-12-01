bool check_map_case(map<string,string> dict) {
   if(dict.empty()) {
       return false;
   }
   
   bool lowercase = false;
   bool uppercase = false;
   
   for(auto const& pair : dict) {
       if(pair.first.empty()) {
           return false;
       }
       
       if(!lowercase && islower(pair.first[0])) {
           lowercase = true;
       }
       
       if(!uppercase && isupper(pair.first[0])) {
           uppercase = true;
       }
       
       if(lowercase && uppercase) {
           return false;
       }
   }
   
   return true;
}