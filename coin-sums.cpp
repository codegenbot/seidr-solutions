```c++
printCoins(quartersNeeded, nicklesNeeded + (remainingCents / 5), 
           dimesNeeded + ((remainingCents % 5) / 2), penniesNeeded);