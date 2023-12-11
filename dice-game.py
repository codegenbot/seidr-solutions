def get_probability(n, m):
    return np.sum(np.triu(np.ones((n, m)) * (1 / n), k=1))
```
The code above uses the fact that the probability of Peter rolling strictly higher than Colin is equal to the sum of the probabilities of all possible outcomes where Peter rolls a higher number than Colin.

To calculate this probability, we first create an array of size (n, m) with ones on the diagonal and zeros elsewhere. We then use the `np.triu` function to extract the upper triangular part of the array, which corresponds to all possible outcomes where Peter rolls a higher number than Colin.

Finally, we sum up all the elements in the upper triangular part of the array to get the final probability.