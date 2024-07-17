Here is the Python code for the problem:

def leaders(a):
    return [a[i] for i in range(len(a)-1, -1, -1) if all(x <= a[i] for x in a[i+1:])]

input()
print(*leaders(list(map(int, input().split()))))