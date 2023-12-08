```python
def find_leaders(vector):
    leaders = []
    max_num = float('-inf')
    for i in range(len(vector)-1, -1, -1):
        if vector[i] >= max_num:
            leaders.append(vector[i])
            max_num = vector[i]
    return reversed(leaders)

vector = list(map(int, input().split()))
result = find_leaders(vector)
for num in result:
    print(num)
```