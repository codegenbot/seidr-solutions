
/*
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/

/*
 * Complete the function below.
 */

void coinSums(int cents) {
    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            nickles++;
            cents -= 5;
        } else {
            pennies++;
            cents--;
        }
    }
    cout << "Number of pennies: " << pennies << endl;
    cout << "Number of nickles: " << nickles << endl;
    cout << "Number of dimes: " << dimes << endl;
    cout << "Number of quarters: " << quarters << endl;
}