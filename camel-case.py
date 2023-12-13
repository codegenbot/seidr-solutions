```python
s = input()
words = s.split()
result = ""
for i in range(len(words)):
    if '-' in words[i]:
        words[i] = words[i].replace('-', ' ')
        words[i] = words[i].title().replace(' ', '').replace('-', '')
    result += words[i] + " "
result = result.strip()
print(result)
```