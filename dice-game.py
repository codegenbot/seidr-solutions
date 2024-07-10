def roll_higher(n, m):
    total_outcomes = n * m
    higher_cases = sum(1 for _ in range(n) if _ > int(m/2))
    return higher_cases / total_outcomes