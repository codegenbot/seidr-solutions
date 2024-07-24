```python
def fruit_distribution(s, n):
    s = s.replace("apples and", " ").replace("oranges and", " ")
    total = int(s.split()[0].replace("apples", "").replace("oranges", "")) + n
    last_value = s.split()[-1]
    if last_value in ["apples", "oranges"]:
        return str(total - 0)
    else:
        return str(total - int(last_value.replace("apples", "").replace("oranges", "")))