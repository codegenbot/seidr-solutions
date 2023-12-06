def get_probability(n, m):
    # Calculate the total number of possible outcomes
    total_outcomes = n * m
    
    # Calculate the number of outcomes where Peter rolls higher than Colin
    peter_wins = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_wins += 1
    
    # Calculate the probability of Peter winning
    probability = peter_wins / total_outcomes
    
    return probability