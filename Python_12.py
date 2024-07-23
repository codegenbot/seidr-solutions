```python
result = '''.join(map(str, sorted(set(map(str, input().split())), key=len, reverse=True)))'''
print(result)