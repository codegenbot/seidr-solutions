def find_pair(n, arr):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] + arr[j] == n:
                return str(arr[i]) + "\n" + str(arr[j])


n = int(input())
print(find_pair(n, list(map(int, input().split()))))