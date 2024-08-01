Here is the solution:

def basement(input_list):
    total_sum = 0
    for i in range(len(input_list)):
        if total_sum < 0:
            return i
        total_sum += input_list[i]
    return -1