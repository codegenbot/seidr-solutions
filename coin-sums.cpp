```c++
int pennies = cents % 5;
nickles = (cents / 5) + pennies / 5;
pennies %= 5;