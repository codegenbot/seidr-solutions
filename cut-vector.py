numbers = list(map(int, input().split()))
subvector1 = []
subvector2 = []

for cut_index in range(1, len(numbers)):
    if sum(numbers[:cut_index]) == sum(numbers) / 2:
        subvector1 = numbers[:cut_index]
        subvector2 = numbers[cut_index:]
        break

print(subvector1)
print(subvector2)