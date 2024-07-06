Here is the modified code:

def double_the_difference(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    avg_diff = (max_num - min_num) / len(numbers)
    return avg_diff * 2