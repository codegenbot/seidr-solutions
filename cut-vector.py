n = int(input())
vec = [int(input()) for _ in range(n)]
diff = float("inf")
cut_idx = 0

for i in range(1, n):
    left_sum = sum(vec[:i])
    right_sum = sum(vec[i:])
    current_diff = abs(left_sum - right_sum)

    if current_diff < diff or (current_diff == diff and right_sum == left_sum):
        diff = current_diff
        cut_idx = i

print(vec[:cut_idx])
print(vec[cut_idx:])