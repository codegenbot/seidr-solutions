first_list = [[1, 2], [3, 4]]
second_list = [10, 20, 30]

def double_the_difference(first_list, second_list):
    total = 0
    for sublist in first_list:
        for num in sublist:
            if isinstance(num, int) and num >= 0:
                total += num**2
    return abs(total - sum(second_list)) // len(second_list) * 2

print(double_the_difference(first_list, second_list))