```
def count_up_to(n: int) -> List[int]:
    prime_numbers = []
    for i in range(2, int(n**0.5) + 1):
        if i % 2 == 0:
            prime_numbers.append(i)
        for j in range(i*i, n+1, i):
            if j % i == 0:
                break
    return prime_numbers
```