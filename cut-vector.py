arr = list(map(int, input().split()))

if not arr:
    print("Input vector is empty.")
else:
    split_index = min(range(1, len(arr)), key=lambda x: abs(sum(arr[:x]) - sum(arr[x:])), default=0)
    subvector1 = arr[:split_index]
    subvector2 = arr[split_index:]
    print("Subvector 1:", subvector1)
    print("Subvector 2:", subvector2)