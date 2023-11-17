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
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
  std::vector<int> result;
  for (int i = 0; i < game.size(); i++) {
    if (game[i] == guess[i]) {
      result.push_back(0);
    } else {
      result.push_back(std::abs(game[i] - guess[i]));
    }
  }
  return result;
}

int main() {
  std::vector<int> game = {1, 2, 3, 4, 5, 1};
  std::vector<int> guess = {1, 2, 3, 4, 2, -2};
  std::vector<int> result = compare(game, guess);
  for (auto i : result) {
    std::cout << i << " ";
  }
  return 0;
} // 0 0 0 0 3 3
