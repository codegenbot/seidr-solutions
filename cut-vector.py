```
def cut_vector(vector):
    n = len(vector)
    if n == 0:
        return [], []
    left_sum = sum(vector[:n//2])
    right_sum = sum(vector[n//2:])
    
    diff = abs(left_sum - right_sum)
    left, right = vector[:n//2], vector[n//2:]
    
    for i in range(n//2 + 1):
        if i == n//2:
            break
        left_sum -= vector[i]
        right_sum += vector[n-i-1]
        d = abs(left_sum - right_sum)
        if d < diff:
            diff = d
            left, right = vector[:n-i], vector[n-i:]
    
    return left, right

vector = list(map(int, input().split()))
print(*cut_vector(vector), sep='\n')