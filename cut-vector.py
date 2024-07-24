n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
cut_index = 0

for i in range(n-1):
    diff = abs(sum(arr[:i+1]) - total_sum)
    if diff < abs(sum(arr[:cut_index]) - total_sum):
        cut_index = i + 1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)