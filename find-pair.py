```
def find_pair(n):
    s = set()
    for _ in range(n):
        num = int(input())
        t = target - num
        if t in s:
            return f"{num} {t}"
        s.add(num)
    return "No pair found"

target = int(input())
print(find_pair(int(input())))