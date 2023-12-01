#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> words_string(std::string s) {
  std::vector<std::string> words;
  std::string word;
  
  // loop through the string character by character
  for (char c : s) {
    // if the character is a comma or space, add the word to the vector and reset it
    if (c == ',' || c == ' ') {
      if (!word.empty()) {
        words.push_back(word);
        word.clear();
      }
    } else {
      // if the character is not a comma or space, append it to the current word
      word += c;
    }
  }
  
  // add the last word to the vector
  if (!word.empty()) {
    words.push_back(word);
  }
  
  return words;
}

int main() {
  std::string s;
  std::cout << "Enter a string of words: ";
  std::getline(std::cin, s);

  std::vector<std::string> result = words_string(s);
  std::cout << "The words in the string are: ";
  for (const std::string& word : result) {
    std::cout << word << " ";
  }
  std::cout << std::endl;

  return 0;
}