Here is the solution in Python:

def cut_vector(lst):
    if len(lst) == 1:
        return lst, []

    left_sum = sum(lst[:len(lst)//2])
    right_sum = sum(lst[len(lst)//2:])

    if left_sum == right_sum:
        return lst[:len(lst)//2+1], lst[len(lst)//2:]
    else:
        min_diff = float('inf')
        split_index = 0
        for i in range(len(lst)):
            left_sum = sum(lst[:i])
            right_sum = sum(lst[i:])
            diff = abs(left_sum - right_sum)
            if diff < min_diff:
                min_diff = diff
                split_index = i

        return lst[:split_index], lst[split_index:]