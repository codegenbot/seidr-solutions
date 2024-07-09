def basement(input):
    total = 0
    min_index = float('inf')
    for i in range(len(input)):
        total += input[i]
        if total < 0:
            min_index = i + 1 
    return -1 if min_index == float('inf') else min_index