Here is the solution in Python:

def leaders(a):
    return [a[i] for i in range(len(a)-1, -1, -1) if all(x <= a[i] for x in a[i+1:])]

input_vector = list(map(int, input().split()))
print(*leaders(input_vector), sep=' ')