n = int(input())
m = int(input())

def probability_of_higher(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    else:
        return min(n, m-1) / max(n, m)

print(probability_of_higher(n, m))