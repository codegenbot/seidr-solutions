n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum // 2
sub_vec1, sub_vec2 = [], []
curr_sum = 0

for num in vec:
    if curr_sum + num <= half_sum:
        curr_sum += num
        sub_vec1.append(num)
    else:
        sub_vec2.append(num)

print(*sub_vec1)
print(*sub_vec2)