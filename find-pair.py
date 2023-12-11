n = int(input())
arr = list(map(int, input().split()))
target = int(input())

def find_pair(arr, target):
    complements = {}
    for i in range(len(arr)):
        complement = target - arr[i]
        if complement in complements:
            return arr[i], complement
        complements[arr[i]] = i

result = find_pair(arr, target)
print(result[0])
print(result[1])