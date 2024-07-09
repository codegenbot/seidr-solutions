```python
input = list(map(int, input().split()))
leaders = [max(input)]
for num in input[:-1]:
    if num >= leaders[-1]:
        leaders.append(num)
print(leaders)