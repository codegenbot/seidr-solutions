int pennies = 0;
int quarters = cents / 25;
cents %= 25;

for (; cents >= 10; cents -= 10) pennies++;

int dimes = cents / 10;
cents %= 10;

for (; cents >= 5; cents -= 5) pennies++;

int nickles = cents / 5;
cents %= 5;

pennies += nickles;

return std::make_tuple(quarters, dimes, nickles, pennies);