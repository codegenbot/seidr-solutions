```
def prob_higher(n, m):
    if n < 1 or m < 1:
        return "Invalid input"
    max_val = max(n, m)
    total_outcomes = max_val * max_val
    peter_wins = sum(min(max_val - i + 1, min(m, i)) for i in range(1, max_val))
    return float(peter_wins) / total_outcomes