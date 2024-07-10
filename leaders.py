n = int(input())
arr = list(map(int, input().split()))

leaders = [arr[i] for i in range(n) if all(arr[j] <= arr[i] for j in range(i + 1, n))]
print(len(leaders))
print(*leaders)