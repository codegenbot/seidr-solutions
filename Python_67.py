```
def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = s.split()
    for i in range(len(parts)-1, -1, -1): 
        if not any(part.lower() in ["apples", "oranges"] for part in parts[:i]):
            return ' and '.join(parts[:i])[:-1]