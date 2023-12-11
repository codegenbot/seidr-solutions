#include <iostream>
#include <string>
using namespace std;

int main() {
  string bowls;
  cin >> bowls;
  
  int score = 0;
  int frame = 0;
  int prevScore = 0;
  int prevPrevScore = 0;
  
  for (int i = 0; i < bowls.length(); i++) {
    if (frame == 10) break;
    
    char bowl = bowls[i];
    if (bowl == 'X') {
      score += 10;
      score += prevScore + prevPrevScore;
      
      prevPrevScore = prevScore;
      prevScore = 10;
      
      frame++;
    } else if (bowl == '/') {
      score += 10;
      score += prevScore - prevPrevScore;
      
      prevPrevScore = 10 - prevPrevScore;
      prevScore = 10;
      
      i++;
      frame++;
    } else if (bowl == '-') {
      prevScore = 0;
    } else {
      score += bowl - '0';
      
      prevPrevScore = prevScore;
      prevScore = bowl - '0';
      
      if (prevScore + prevPrevScore == 10) {
        score += prevScore;
      }
      
      frame++;
    }
  }
  
  cout << score;
  
  return 0;
}