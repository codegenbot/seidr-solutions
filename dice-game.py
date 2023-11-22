def dice_game():
    n = int(input())
    m = int(input())
    total_outcomes = n * m
    desired_outcomes = (n-1) * m
    probability = desired_outcomes / total_outcomes
    return probability

result = dice_game()
print(result)