
```
def get_probability(n, m):
    # Probability of Peter rolling higher or equal to Colin
    peter_higher = sum(comb(m, i) for i in range(1, n + 1)) / (m ** n)
    
    # Probability of Peter and Colin rolling the same number
    peter_colin_same = comb(n, m) / (n ** m)
    
    return peter_higher - peter_colin_same
```