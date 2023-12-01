vector<float> find_closest_elements(vector<float> numbers){
   int n = numbers.size();
   float min_diff = abs(numbers[0] - numbers[1]);
   int idx1 = 0;
   int idx2 = 1;
   for(int i=0; i<n-1; i++){
      for(int j=i+1; j<n; j++){
         float diff = abs(numbers[i] - numbers[j]);
         if(diff < min_diff){
            min_diff = diff;
            idx1 = i;
            idx2 = j;
         }
      }
   }
   return {numbers[idx1], numbers[idx2]};
}