vector<int> pile;
pile.push_back(n);
for(int i=1; i<n; i++){
  if(n % 2 == 0){
    pile.push_back(pile[i-1]+2);
  }else{
    pile.push_back(pile[i-1]+1);
  }
}
return pile;