import math
def solve():
    return sum(math.floor(i/3)-2 for i in map(int, input().split()))