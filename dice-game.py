n = int(input())
m = int(input())

def probability_of_higher(n, m):
    return n / (n + m)

result = probability_of_higher(n, m)
print(result)