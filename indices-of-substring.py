```python
text = input()
target = input()

indices = []
start = 0

while True:
    index = text.find(target, start)
    if index == -1:
        break
    indices.append(index)
    start = index + len(target)

print(" ".join(map(str, indices)))
```