def rescale_to_unit(numbers):
    min_num = max_num = numbers[0]
    for num in numbers[1:]:
        min_num = min(min_num, num)
        max_num = max(max_num, num)
    rescaling_factor = max_num - min_num
    return [(num - min_num) / rescaling_factor for num in numbers]


n = 5
numbers = [1.0, 2.0, 3.0, 4.0, 5.0]
print(rescale_to_unit(numbers))