```
def roll_game(n, m):
    total_combinations = n * m
    higher_than_colin_wins = sum(1 for i in range(m+1) for j in range(i+1, n+1))
    return higher_than_colin_wins / total_combinations