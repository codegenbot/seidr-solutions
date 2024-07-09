int pennies = 0;
while (cents > 0) {
    if (cents >= 5) {
        pennies++;
        cents -= 5;
    } else {
        pennies++;
        cents--;
    }
}