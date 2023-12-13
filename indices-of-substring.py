```python
text = input()
target = input()

if len(target) > len(text):
    print("Invalid input: Target length is larger than text length")
    exit()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
print(" ".join(map(str, indices)))
```