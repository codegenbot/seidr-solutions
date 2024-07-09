int pennies = 0;
while (cents > 0) {
    pennies += cents / 5;
    cents %= 5;
}