```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = sum(vector[i+1:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:] + [0]

vector = list(map(int, input().strip().split()))
print(*cut_vector(vector), sep='\n')