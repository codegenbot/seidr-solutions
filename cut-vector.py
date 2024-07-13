arr = list(map(int, input().split()))

if len(arr) == 1:
    print("Subvector 1:", arr)
    print("Subvector 2:", [])
else:
    total_sum = sum(arr)
    split_index = min(range(1, len(arr)), key=lambda x: abs(2 * sum(arr[:x]) - total_sum))
    subvector1 = arr[:split_index]
    subvector2 = arr[split_index:]
    print("Subvector 1:", subvector1)
    print("Subvector 2:", subvector2)