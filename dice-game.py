def get_probability(n, m):
    return 1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)
```
This code defines a function `get_probability` that takes two integers `n` and `m` as input. It returns the probability that Peter rolls strictly higher than Colin when they both roll their dice at the same time. The formula for calculating this probability is:

1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)

The function uses a generator expression to iterate over all possible outcomes of Peter's roll and checks if each outcome is greater than Colin's roll. If the outcome is greater, it adds 1 to the sum. Finally, it divides the sum by the total number of possible outcomes (m + 1) to get the probability.

Note that this code assumes that the dice are fair and have equal numbers of sides. If the dice are not fair or have different numbers of sides, you may need to modify the code accordingly.