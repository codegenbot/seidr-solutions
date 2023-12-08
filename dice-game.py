```
def get_probability(n, m):
    return (n - m + 1) / (n * m)
```
This is a simple function that takes two arguments, n and m, and returns the probability of Peter rolling strictly higher than Colin. The probability is calculated as (n - m + 1) / (n * m), which is the number of ways for Peter to roll strictly higher than Colin divided by the total number of possible outcomes.