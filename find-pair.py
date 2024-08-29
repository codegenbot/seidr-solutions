```
def find_pair():
    n = int(input())
    arr = [int(x) for x in input().split()]
    target = int(input())

    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == target:
                return str(arr[i]) + "\n" + str(arr[j])

print(find_pair())