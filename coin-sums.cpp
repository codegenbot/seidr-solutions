#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
vector<int> coins = {1, 5, 10, 25};
int totalCents = 0;
cin >> totalCents;
int numCoins[4] = {0};
for (int i = 0; i < 4; i++) {
numCoins[i] = totalCents / coins[i];
totalCents -= numCoins[i] * coins[i];
}
for (int i = 0; i < 4; i++) {
cout << numCoins[i] << " ";
}
return 0;
}