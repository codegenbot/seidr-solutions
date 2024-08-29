Here is a Python solution for the problem:

def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i

print(basement(list(map(int, input().split()))))