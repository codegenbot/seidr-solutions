```
print("Enter a number: ", end="")
n = int(input())

def get_max_triples(n):
    if n < 1:
        return None
    max_sum = 0
    for i in range(2, n+1): 
        is_prime = True
        for j in range(2, int(i**0.5)+1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            max_sum += i
    return max_sum

print(get_max_triples(n))