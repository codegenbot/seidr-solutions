n = int(input())
vector = []
for i in range(n):
    vector.append(int(input()))

total_sum = sum(vector)
half_sum = total_sum // 2

current_sum = 0
cut_index = 0

for i in range(n):
    current_sum += vector[i]
    if current_sum >= half_sum:
        cut_index = i
        break

if abs(total_sum - 2 * current_sum) <= abs(total_sum - 2 * (current_sum - vector[i])):
    subvector1 = vector[:i]
    subvector2 = vector[i:]
else:
    subvector1 = vector[:i+1]
    subvector2 = vector[i+1:]

for i in subvector1:
    print(i)

for i in subvector2:
    print(i)