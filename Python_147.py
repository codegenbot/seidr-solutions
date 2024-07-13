```python
print("Enter the start and end numbers: ", end="")
start, n = map(int, input().split())

def get_max_triples(start, n):
    if n < start:
        return None
    max_sum = 0
    for i in range(start, n+1):
        triple_sum = sum(range(3*i-2, 3*i)) + sum(range(3*i+1, (3*(i+1)//2) + 1))
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum

print(get_max_triples(start, n))