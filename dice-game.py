n = int(input())
m = int(input())

def probability_of_higher(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    elif n > m:
        return (n - m) / n
    else:
        return (m - n + 1) / m

print(probability_of_higher(n, m))