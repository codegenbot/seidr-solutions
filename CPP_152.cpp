/*
I think we all remember that feeling when the result of some long-awaited
event is finally known. The feelings and thoughts you have at that moment are
definitely worth noting down and comparing.
Your task is to determine if a person correctly guessed the results of a number of matches.
You are given two vectors of scores and guesses of equal length, where each index shows a match. 
Return a vector of the same length denoting how far off each guess was. If they have guessed correctly,
the value is 0, and if not, the value is the absolute difference between the guess and the score.


vddsaadsavector<int> custave(vector<int> game,vect
  r<int> guess){

  //INFINITE LOOP TO RUN FOR WHILE VECTOR IS NOT EMPTY
     while(!guess.empty() || !game.empty()){
      game[0] += game[1] - guess[1];
      if(game[0] < 1){
        game[0] = 1;
      }
      
    guess.erase
using namespace std;

vector<int> compare(vector<int> game,vector<int> guess){
 vector<int> custave;

  //INFINITE LOOP TO RUN FOR WHILE VECTOR IS NOT EMPTY
  while(!guess.empty() || !game.empty()){

  
    guess.pop_front();
    game.pop_front();
     guess.push_back(0);
       game.push_back{0};
 
    
   }
   return game;
 }

 for(auto i: compare({1,2,3,4,5,1},{1,2,3,4,2,-2}) -> {0,0,0,0,3,3})
    cout<< i<<endl;
   for(auto i: compare({0,5,0,0,0,4},{4,1,1,0,0,-2}) -> {4,4,1,0,0,6})
    cout<< i<<endl;
   return 0;
 }
