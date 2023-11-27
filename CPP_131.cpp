int digits(int n){
   int product = 1;
   bool hasOddDigit = false;
   string num = to_string(n);
   
   for(int i=0; i<num.length(); i++){
      int digit = num[i] - '0';
      if(digit % 2 != 0){
         product *= digit;
         hasOddDigit = true;
      }
   }
   
   if(!hasOddDigit){
      product = 0;
   }
   
   return product;
}