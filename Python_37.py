def sort_even(input_list: list) -> list:
    evens = [x for x in input_list if x % 2 == 0]
    sorted_evens = sorted([abs(x) for x in evens])
    result = []
    even_index = 0
    for num in input_list:
        if num % 2 == 0:
            result.append(sorted_evens[even_index] * (1 if num >= 0 else -1))
            even_index += 1
        else:
            result.append(num)
    return result