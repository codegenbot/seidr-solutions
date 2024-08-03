```c++
int main() {
    int cents;

    cin >> cents;

    int remainingPennies = cents;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;
    int quartersNeeded = 0;

    while(remainingPennies >= 25) {
        remainingPennies -= 25;
        quartersNeeded++;
    }

    while(remainingPennies >= 10) {
        remainingPennies -= 10;
        dimesNeeded++;
    }

    while(remainingPennies >= 5) {
        remainingPennies -= 5;
        nicklesNeeded++;
    }

    printCoins(quartersNeeded*25 + dimesNeeded*10 + nicklesNeeded*5, nicklesNeeded, dimesNeeded, quartersNeeded);

    return 0;
}