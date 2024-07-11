numbers = list(map(int, input().split()))

if len(numbers) <= 2 and numbers[-1] == sum(numbers[:-1]):
    cut_index = 1
    subvector1 = numbers[:cut_index]
    subvector2 = numbers[cut_index:]

print(subvector1)
print(subvector2)