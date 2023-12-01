#include <string>
#include <cassert>

bool simplify(string x, string n) {
  int numeratorX = stoi(x.substr(0, x.find('/')));
  int denominatorX = stoi(x.substr(x.find('/') + 1));
  int numeratorN = stoi(n.substr(0, n.find('/')));
  int denominatorN = stoi(n.substr(n.find('/') + 1));

  int resultNumerator = numeratorX * numeratorN;
  int resultDenominator = denominatorX * denominatorN;

  return resultNumerator % resultDenominator == 0;
}

int main() {
  assert (simplify("1/5", "1/5") == false);

  return 0;
}