def rescale_to_unit(numbers):
    min_num = max_num = numbers[0]
    for num in numbers[1:]:
        min_num = min(min_num, num)
        max_num = max(max_num, num)
    rescaling_factor = max_num - min_num
    return [(num - min_num) / rescaling_factor for num in numbers]


n = int(input())
numbers = [float(input()) for _ in range(n)]
print(rescale_to_unit(numbers))