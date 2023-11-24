n = int(input())
m = int(input())

def probability_of_higher_roll(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    else:
        return (n - 1) / n

print(probability_of_higher_roll(n, m))