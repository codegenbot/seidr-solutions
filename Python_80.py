```
def is_happy(n):
    if not isinstance(n, int) and n.isdigit():
        n = int(n)
    if n < 1:
        return False
    seen = set()
    while n != 1 and n not in seen:
        seen.add(n)
        n = sum(int(i) ** 2 for i in str(n))
    return n == 1