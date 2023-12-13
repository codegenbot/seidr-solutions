```python
text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 1) if text.find(target, i, i+len(target)) != -1 and text.find(target, i+1, i+len(target)+1) == -1]
print(" ".join(indices))
```