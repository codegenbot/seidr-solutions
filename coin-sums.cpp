```cpp
int remainingCents = penniesNeeded;

printCoins(quartersNeeded, nicklesNeeded + (remainingCents / 5), 
           dimesNeeded + ((remainingCents % 5) / 10), 
           quartersNeeded + (remainingCents / 25));