def find_pair(n, arr):
    for i in range(0, n):
        for j in range(i + 1, n):
            if arr[i] + arr[j] == int(input()):
                return "{} {}".format(arr[i], arr[j])
    return "No pair found"


n = int(input())
print(find_pair(n, list(map(int, input().split()))))