Here is a Python function that solves the problem:

def fuel_cost(n):
    return sum((i//3)-2 for i in map(int, input().split()))