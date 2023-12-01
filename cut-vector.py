vector = list(map(int, input().split()))

min_diff = float("inf")
index = -1
for i in range(1, len(vector)):
    diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if diff < min_diff:
        min_diff = diff
        index = i

subvector1 = vector[:index]
subvector2 = vector[index:]

for num in subvector1:
    print(num)
for num in subvector2:
    print(num)