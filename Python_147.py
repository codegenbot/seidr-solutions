```
def get_max_triples(n):
    max_sum = 0
    for i in range(1, n+1):
        triple_sum = sum(range(i*3-2, (i+1)*3))
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum

n = int(input("Enter a number: "))
print(get_max_triples(n))