import sys

def dice_game():
    n = int(sys.stdin.readline().strip())
    m = int(sys.stdin.readline().strip())
    
    if n <= 1 or m <= 1:
        return 0.0
    
    total_outcomes = n * m
    successful_outcomes = (n - 1) * m
    probability = successful_outcomes / total_outcomes
    
    return round(probability, 2)

print(dice_game())