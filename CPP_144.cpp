#include <string>

bool simplify(std::string x, std::string n) {
  int numeratorX = std::stoi(x.substr(0, x.find('/')));
  int denominatorX = std::stoi(x.substr(x.find('/') + 1));
  int numeratorN = std::stoi(n.substr(0, n.find('/')));
  int denominatorN = std::stoi(n.substr(n.find('/') + 1));

  int resultNumerator = numeratorX * numeratorN;
  int resultDenominator = denominatorX * denominatorN;

  return resultNumerator % resultDenominator == 0;
}