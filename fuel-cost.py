import math
def solve(*args):
    return sum(math.floor(arg/3)-2 for arg in args)

print(solve(int(x) for x in "659 8351 2839".split()))