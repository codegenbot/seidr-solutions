```
def cut_vector(lst):
    if len(lst) == 1 or lst[0] == 0:
        return [lst], []

    left_half = []
    right_half = []

    for i in range(len(lst)):
        if sum(left_half) > sum(right_half) and (len(left_half) == 0 or lst[i-1] <= lst[i]):
            return [left_half + [lst[i]], right_half]
        elif sum(left_half) <= sum(right_half):
            left_half.append(lst[i])
        else:
            right_half.append(lst[i])

    return [left_half, right_half]

print(cut_vector([1])) 
print(cut_vector([0])) 
print(cut_vector([1, 10])) 
print(cut_vector([1, 100])) 
print(cut_vector([1, 1000])) 
print(cut_vector([1, 10000]))