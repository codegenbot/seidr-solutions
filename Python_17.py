def sort_odd_numbers(input_list: List[int]) -> List[int]:
    odd_numbers = sorted([num for num in input_list if num % 2 != 0])
    index = 0
    sorted_list = []
    for num in input_list:
        if num % 2 != 0:
            sorted_list.append(odd_numbers[index])
            index += 1
        else:
            sorted_list.append(num)
    return sorted_list