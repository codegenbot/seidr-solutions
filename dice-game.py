def dice_game(n, m):
    if n < 1 or m < 1:
        return "Error: Input should be positive integers."
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(m + 1, n * m) if (i // n) + 1 > (i % n) + 1)
    probability = peters_wins / total_outcomes
    return str(probability).rstrip("0").lstrip("0")[0] if probability < 1 else "1.0"