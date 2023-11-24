n = int(input())
m = int(input())

def probability_of_higher(n, m):
    return (n - 1) / (n + m)

result = probability_of_higher(n, m)
print(result)