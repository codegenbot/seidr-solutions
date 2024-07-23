```python
s = input("Enter a string: ")
n -= sum(int(d) for d in s if d.isdigit())
vowels = 'ao'
n -= sum(1 for c in s if c.lower() in vowels)
print(n)