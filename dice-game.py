def get_probability(n, m):
    return (m / (n + m - 1)) * (1 - (1 / n))
```
In this problem, we are given two dice with different numbers of sides. We need to find the probability that Peter's die will roll higher than Colin's die if they both roll at the same time.

To solve this problem, we can use the following formula:

P(Peter's die > Colin's die) = (m / (n + m - 1)) \* (1 - (1 / n))

Where:

* P(Peter's die > Colin's die) is the probability that Peter's die will roll higher than Colin's die.
* m is the number of sides on Colin's die.
* n is the number of sides on Peter's die.
* (1 / n) is the probability that Peter's die will roll a specific side.
* (m / (n + m - 1)) is the probability that Colin's die will roll a specific side.

We can simplify this formula by noticing that the probability of rolling a specific side on both dice is equal to the probability of rolling that side on Peter's die times the probability of rolling that side on Colin's die. Therefore, we can rewrite the formula as:

P(Peter's die > Colin's die) = (1 - (1 / n)) \* (m / (n + m - 1))

This formula gives us the probability that Peter's die will roll higher than Colin's die if they both roll at the same time.