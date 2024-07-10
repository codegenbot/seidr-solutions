n = int(input())
arr = list(map(int, input().split()))

leaders = [
    arr[i] for i in range(n - 1) if all(arr[j] <= arr[i] for j in range(i + 1, n))
]
leaders.append(arr[n - 1])

print(len(leaders))
print(*leaders)