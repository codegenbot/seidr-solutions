int main() {
    int cents;

    cin >> cents;

    int penniesNeeded = cents;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;
    int quartersNeeded = 0;

    while(penniesNeeded >= 25) {
        penniesNeeded -= 25;
        quartersNeeded++;
    }

    int remainingCents = penniesNeeded;
    while(remainingCents >= 10) {
        remainingCents -= 10;
        dimesNeeded++;
    }

    while(remainingCents >= 5) {
        remainingCents -= 5;
        nicklesNeeded++;
    }

    while(remainingCents > 0) {
        penniesNeeded = remainingCents;
        remainingCents = 0;
    }

    printCoins(quartersNeeded, nicklesNeeded, dimesNeeded, penniesNeeded);

    return 0;
}