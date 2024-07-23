```
def solve():
    """return the sum of all of the new integers in the vector"""
    return sum((x//3) - 2 for x in map(int, input().split()))