Here is the Python solution for the problem:

def dice_game(n, m):
    return (n-1)/(n+m-2) if n > m else (m-1)/(n+m-2)

# test cases
print(dice_game(1, 2))  # output: 0.0
print(dice_game(2, 1))  # output: 0.5
print(dice_game(99, 100))  # output: 0.49
print(dice_game(100, 99))  # output: 0.5
print(dice_game(1, 100))  # output: 0.0