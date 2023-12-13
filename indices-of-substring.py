```python
text = input()
target = input()

indices = [i for i, _ in enumerate(text) if target in text[i:i+len(target)]]
print(" ".join(map(str, indices)))
```