```
def get_max_triples(n):
    max_sum = 0
    for i in range(1, n+1):
        for j in range(i, n+1):
            max_sum += (i + j) * (i + j) // 2
    return max_sum // 3

n = int(input("Enter a number: "))
print(get_max_triples(n))