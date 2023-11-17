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
vector<int> result;
for(int i = 0; i< game.size(); i++){
  result.push_back(abs(game[i]-guess[i]));
}
return result;
}
vector<int> compare(vector<int> game,vector<int> guess)
int main(){
  vector<int> a = {1,2,3,4,5,1};
  vector<int> b = {1,2,3,4,2,-2};
  vector<int> c = {0,5,0,0,0,4};
  vector<int> d = {4,1,1,0,0,-2};
  vector<int> e = {1,2,3,4,5,6};
  vector<int> f = {1,2,3,4,5,6};
  vector<int> g = {1,2,3,4,5,6};
  vector<int> h = {1,2,3,4,5,6};
  vector<int> i = {1,2,3,4,5,6};
  vector<int> j = {1,2,3,4,5,6};
  compare(a,b);
  compare(c,d);
  compare(e,f);
  compare(g,h);
  compare(i,j);
}
