```python
n = int(input())
numbers = list(map(int, input().split()))

leaders = []
max_right = numbers[n-1]
leaders.append(max_right)
for i in range(n-2, -1, -1):
    if numbers[i] >= max_right:
        max_right = numbers[i]
        leaders.append(max_right)
leaders.reverse()

for num in leaders:
    print(num)
```