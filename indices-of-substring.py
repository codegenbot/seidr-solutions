```python
text = input() 
target = input()

indices = []
start = 0

while start < len(text) - len(target)+1:
    if text[start:start+len(target)] == target or text[start:start+len(target)] == target[::-1] or text[start:start+len(target)][::-1] == target:
        indices.append(start)
    start += 1

print(' '.join(map(str, indices)))
```