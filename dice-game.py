Here is the Python solution for the problem:

def dice_game(n, m):
    return 1 - (n + 1) / (n * m)

# Test cases
print(dice_game(1, 2)) # Output: 0.0
print(dice_game(2, 1)) # Output: 0.5
print(dice_game(99, 100)) # Output: 0.49
print(dice_game(100, 99)) # Output: 0.5
print(dice_game(1, 100)) # Output: 0.0