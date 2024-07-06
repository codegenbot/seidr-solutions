```
input_numbers = input("Enter a list of integers separated by commas: ")
if not re.match(r",\d+(?=,),?", input_numbers):
    raise ValueError("Invalid input for numbers")
numbers = [int(num) for num in input_numbers.split(",")]

try:
    delimiter = int(input("Enter an integer to use as the delimiter: "))
    if not numbers or not numbers[0]:
        result = []
    else:
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([result[-1], delimiter, numbers[i]])
        if result and result[-1] == delimiter:
            result.pop()  # remove trailing delimiter
    print(result)
except ValueError as e:
    print(f"Error: {e}")