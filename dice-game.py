n = int(input())
m = int(input())

def probability_of_higher_roll(n, m):
    return round((n-1) / (n+m-2), 7)

print(probability_of_higher_roll(n, m))