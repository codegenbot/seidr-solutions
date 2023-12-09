```
def count_up_to(n):
    numbers = range(2, n+1)
    for i in numbers:
        if any(j <= int(i**0.5) for j in range(2, i)):
            break
    
    return [i for i in numbers if i not in set(range(2, int(n**0.5)+1))]
```