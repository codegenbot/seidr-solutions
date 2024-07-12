n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum / 2
left_sum = 0
cut_index = 0

for i in range(n):
    left_sum += vec[i]
    if left_sum >= half_sum:
        cut_index = i
        break

if abs(left_sum - (total_sum - left_sum)) < abs(
    left_sum - vec[cut_index] - (total_sum - left_sum + vec[cut_index])
):
    print(vec[: cut_index + 1])
    print(vec[cut_index + 1 :])
else:
    print(vec[:cut_index])
    print(vec[cut_index:])