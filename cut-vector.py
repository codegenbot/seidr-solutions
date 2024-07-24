Here is the completed code:

def cut_vector(lst):
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(lst)):
        if lst[i] - lst[0] <= min_diff:
            min_diff = lst[i] - lst[0]
            split_index = i
    return [lst[:split_index], lst[split_index:]]