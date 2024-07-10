```python
def fruit_distribution(s, n):
    quantities = [i for i in s.split() if "apples" in i or "oranges" in i]
    apples = int(''.join(filter(str.isdigit, ' '.join(quantities)[0:-9])))
    oranges = int(''.join(filter(str.isdigit, ' '.join(quantities)[-9:])))
    return n - (int(apples) + int(oranges))