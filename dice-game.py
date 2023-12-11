def get_probability(n, m):
    return 1 / (m + 1) * sum(1 for i in range(1, n + 1) if i > m)
```
This solution uses a combination of mathematical concepts such as probability and combinatorics to calculate the desired output. The function takes two arguments, `n` and `m`, which represent the number of sides on Peter's and Colin's dice, respectively.

The function first calculates the total number of possible outcomes when both dice are rolled, which is equal to `m + 1`. This is because there are `m + 1` possible values that Colin's die can take, and each value has a probability of occurring.

Next, the function calculates the probability of Peter rolling strictly higher than Colin by summing up the probabilities of all the outcomes where Peter rolls a higher number than Colin. This is done using a list comprehension that iterates over all possible values of `i` between 1 and `n`, inclusive, and checks if each value is greater than `m`. If it is, then the probability of that outcome is added to the sum.

Finally, the function returns the calculated probability as the output.