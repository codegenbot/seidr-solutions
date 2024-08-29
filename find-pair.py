```
def find_pair(n):
    s = set()
    for _ in range(int(input())):
        x = int(input())
        if -x in s:
            print(-x, x)
            return
        s.add(x)

find_pair(0)