target = int(input())
n = int(input())
arr = list(map(int, input().split()))

def find_pair(arr, target):
    seen = {}
    for num in arr:
        complement = target - num
        if complement in seen:
            return complement, num
        seen[num] = True
    return None

result = find_pair(arr, target)
print(result[0])
print(result[1])