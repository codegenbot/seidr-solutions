vector<int> eat(int number,int need,int remaining){
   int total_eaten = number + need;
   int carrots_left = remaining - need;
   if(carrots_left < 0){
      carrots_left = 0;
   }
   return {total_eaten, carrots_left};
}