```
def get_probability(n, m):
    peter_outcomes = factorial(n)
    colin_outcomes = factorial(m)
    higher_outcomes = factorial(n - m) / (n * m)
    total_outcomes = factorial(n + m)
    return higher_outcomes / total_outcomes
```