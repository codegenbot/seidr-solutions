```
print("Enter a number: ", end="")
n = int(input())

def get_max_triples(n):
    if n < 1:
        return None
    max_sum = 0
    for i in range(2, (n//3)+1): 
        triple_sum = sum(i*(i*2-1) for _ in range(3))
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum

print(get_max_triples(n))