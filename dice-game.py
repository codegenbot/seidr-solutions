def get_probability(n, m):
    return 1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)
```
The code defines a function `get_probability` that takes two arguments: `n`, the number of sides on Peter's die, and `m`, the number of sides on Colin's die. The function returns the probability that Peter rolls strictly higher than Colin.

The function first calculates the total number of possible outcomes for both dice, which is given by the product of the number of sides on each die: `n * m`. It then calculates the number of outcomes in which Peter rolls strictly higher than Colin, which is given by the sum of all the integers from 1 to `n` that are greater than `m`: `sum(1 for i in range(1, n + 1) if i > m)`.

Finally, the function divides the number of outcomes in which Peter rolls strictly higher than Colin by the total number of possible outcomes, which gives us the probability that Peter rolls strictly higher than Colin. The result is returned as a float value between 0 and 1.