```
def dice_game(n, m):
    total_pairs = n * m
    favorable_pairs = sum(range(m+1, n+1))  # Counting the cases where Peter rolls strictly higher than Colin
    return favorable_pairs / total_pairs