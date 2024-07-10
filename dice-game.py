Here is the solution:

def roll_higher(n, m):
    return (n - 1) / (n * m - n - m)

n = int(input())
m = int(input())

print(roll_higher(n, m))