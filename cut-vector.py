```
def cut_vector(lst):
    total_sum = sum(lst)
    left_sum = 0
    split_idx = 0
    
    for i in range(len(lst)):
        left_sum += lst[i]
        if left_sum * 2 == total_sum:
            return (lst[:i+1], lst[i+1:])
        elif i > 0 and abs((left_sum - (total_sum - left_sum)) or (sum(lst[1:]) - sum(lst[:1]))) < min_diff:
            min_diff = abs((left_sum - (total_sum - left_sum)) or (sum(lst[1:]) - sum(lst[:1])))
            split_idx = i
            
    return lst[:split_idx], lst[split_idx:]

print(cut_vector([2, 1897, 2594]))