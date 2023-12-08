
```
def get_probability(n, m):
    peter_outcomes = math.factorial(n)
    colin_outcomes = math.factorial(m)
    higher_outcomes = math.factorial(n - m)
    total_outcomes = math.factorial(n + m)
    return higher_outcomes / total_outcomes
```