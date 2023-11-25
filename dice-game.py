n = int(input())
m = int(input())

def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = (n-1) * m
    probability = favorable_outcomes / total_outcomes
    return probability

print(dice_game(n, m))