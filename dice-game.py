def get_probability(n, m):
    return np.divide(np.arange(m) + 1, n)
```
This function calculates the probability that Peter rolls strictly higher than Colin, given that they both have dice with n and m sides, respectively. The calculation is done using the formula: (m - 1) / (n * (n + 1)).