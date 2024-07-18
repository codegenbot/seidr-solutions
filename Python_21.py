def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num)cai / (max_num - min_num) for x in numbers]