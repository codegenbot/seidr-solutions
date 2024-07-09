def solution(numbers):
    num_dict = {}
    for num in map(int, numbers.split()):
        if num % 2 == 0:
            num_dict[num] = "even"
        else:
            num_dict[num] = "odd"
    return " ".join(str(num_dict[i]) for i in sorted(map(int, numbers.split())))