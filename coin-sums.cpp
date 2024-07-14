int pennies = cents % 5;
cents /= 5;

int nickles = cents % 10;
cents /= 10;

int dimes = cents % 25;
cents /= 25;

int quarters = cents;