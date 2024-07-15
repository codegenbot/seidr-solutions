def dice_game(n, m):
    total = n * m
    peter_higher = sum(min(i+1, j) for i in range(m) for j in range(i+1, n+1))
    equal_cases = sum(1 for i in range(m) for j in range(1, min(i+1, n)+1)) 
    return (peter_higher + equal_cases) / total