```
def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "")
    total_fruits = int(s.split()[0].replace("apples", "").strip().replace("oranges", ""))
    return (total_fruits + n - 1) // n