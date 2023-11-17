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
#include<iostream>
#include<string>
#include<vector> //include vector
#include<algorithm>
#include<cmath>
using namespace std; // using namespace std

int main(){
  vector<int> game = {1,2,3,4,5,1};
  vector<int> guess = {1,2,3,4,2,-2};
  vector<int> res = compare(game, guess);
  cout << res[0] << endl;
  cout << res[1] << endl;
  cout << res[2] << endl;
  cout << res[3] << endl;
  cout << res[4] << endl;
  cout << res[5] << endl;
}
vector<int> compare(vector<int> game,vector<int> guess){ // compare function
  int n = game.size(); // the size of the vector
  vector<int> res; // declaring a new vector
  for(int i = 0; i < n; i++){ // for loop
    res.push_back(abs(game[i] - guess[i])); // pushing back the values
  } // end for loop
  return res; // return res
} // end compare function
