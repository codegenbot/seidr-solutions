def double_even_numbers(input_list: List[int]) -> List[int]:
    return [num * 2 if num % 2 == 0 else num for num in input_list]