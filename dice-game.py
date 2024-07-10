def roll_higher(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    
    for i in range(1, min(n,m)+1):
        favorable_outcomes += n - i
    
    return favorable_outcomes / total_outcomes