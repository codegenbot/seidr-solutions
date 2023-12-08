
The function is already returning the probability that Peter rolls strictly higher than Colin. To get the desired output, you can modify the code as follows:
```
def get_probability(n, m):
    return (n - m + 1) / (n * m)
```