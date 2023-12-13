#include <iostream>
#include <vector>

int main() {
std::vector<int> digits;

for (int i = 0; i < 16; i++) {
int digit;
std::cin >> digit;
digits.push_back(digit);
}

int sum = 0;
for (int i = 0; i < 16; i++) {
int newDigit = digits[i];

if (i % 2 == 1) {
newDigit *= 2;
if (newDigit > 9) {
newDigit -= 9;
}
}

sum += newDigit;
}

std::cout << sum << std::endl;

return 0;
}