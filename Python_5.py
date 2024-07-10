def intersperse_numbers(input_string: str) -> List[int]:
    numbers = [int(x) for x in input_string.split()]
    delimeter = input("Enter the delimeter: ")
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], int(delimeter), numbers[i]])
    return result