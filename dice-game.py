```"""dice-game.
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin..

def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                favorable_outcomes += 1
    return favorable_outcomes / total_outcomes