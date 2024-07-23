```
import math
def solve():
    return sum(math.floor(x/3)-2 for x in map(int, input().split()))