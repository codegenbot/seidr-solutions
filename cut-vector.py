n = int(input())
A = []
for i in range(n):
    A.append(int(input()))

total_sum = sum(A)
half_sum = total_sum // 2
curr_sum = 0
cut_index = 0

for i in range(n):
    curr_sum += A[i]
    if curr_sum >= half_sum:
        if curr_sum == half_sum:
            cut_index = i + 1
            break
        else:
            if curr_sum - half_sum < total_sum - curr_sum:
                cut_index = i + 1
            else:
                cut_index = i

first_subvector = A[:cut_index]
second_subvector = A[cut_index:]
print(*first_subvector, sep="\n")
print(*second_subvector, sep="\n")