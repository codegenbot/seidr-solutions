
The modified `getScore` function takes a string representing the individual bowls in a 10-frame round of 10 pin bowling as input and returns the score of that round. The function correctly handles strikes and spares, including the case where a strike is followed by a spare.

Here's an example usage of the modified `getScore` function:
```
int main() {
    string bowls = "XXXXXXXXXXXX";
    cout << getScore(bowls) << endl;
    return 0;
}
```
In this case, the output will be `300`, which is the correct score for a perfect game of bowling.