/*
I think we all remember that feeling when the result of some long-awaited
event is finally known. The feelings and thoughts you have at that moment are
definitely worth noting down and comparing.
Your task is to determine if a person correctly guessed the results of a number of matches.
You are given two vectors of scores and guesses of equal length, where each index shows a match. 
Return a vector of the same length denoting how far off each guess was. If they have guessed correctly,
the value is 0, and if not, the value is the absolute difference between the guess and the score.


example:

compare({1,2,3,4,5,1},{1,2,3,4,2,-2}) -> {0,0,0,0,3,3}
compare({0,5,0,0,0,4},{4,1,1,0,0,-2}) -> {4,4,1,0,0,6}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
  vector<int> res;
  for(int i=0;i<game.size();i++)
    res.push_back(abs(game[i]-guess[i]));
  return res;
}
void print_vector(vector<int> v){
  for(int i=0;i<v.size();i++)
    printf("%d ",v[i]);
  printf("\n");
}
int main(){
  int g[6]={1,2,3,4,5,1};
  int gs[6]={1,2,3,4,2,-2};
  int g1[6]={0,5,0,0,0,4};
  int gs1[6]={4,1,1,0,0,-2};
  vector<int> game(g,g+6);
  vector<int> guess(gs,gs+6);
  vector<int> game1(g1,g1+6);
  vector<int> guess1(gs1,gs1+6);
  print_vector(compare(game,guess));
  print_vector(compare(game1,guess1));
  return 0;
}
vector<int> compare(vector<int> game,vector<int> guess){
