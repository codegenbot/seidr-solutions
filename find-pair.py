```
def find_pair(n, arr):
    for i in range(n):
        for j in range(i+1, n):
            if arr[i] + arr[j] == int(input()):
                return str(arr[i]) + '\n' + str(arr[j])

print(find_pair(int(input()), [int(x) for x in input().split()]))