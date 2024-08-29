Here is the completed code for the dice-game problem:

def roll_higher(n, m):
    return (m-1) / (n*m - 1) if n > m else (n-1) / (n*m - 1)

# test cases
print(roll_higher(1, 2))
print(roll_higher(2, 1))
print(roll_higher(99, 100))
print(roll_higher(100, 99))
print(roll_higher(1, 100))