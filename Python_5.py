```
def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []

    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter)])
    if result[-1] == str(delimiter):
        result.pop()

    numbers_input = input("Enter the list of numbers (space-separated): ")
    while True:
        try:
            numbers = [int(i) for i in numbers_input.split()]
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")
            numbers_input = input("Enter the list of numbers (space-separated): ")

    delimiter_input = input("Enter the delimiter: ")
    if len(delimiter_input) == 0:
        delimiter = ""
    else:
        while True:
            if len(delimiter_input) == 1 and delimiter_input.isalpha():
                delimiter = str(delimiter_input)
                break
            else:
                print("Invalid delimiter. Please enter a single character.")
                delimiter_input = input("Enter the delimiter: ")

    output = [str(x) + delimiter for x in numbers]
    if len(output) > 1 and output[0] == delimiter:
        output.pop(0)
    elif len(output) > 1 and output[-1] == delimiter:
        output.pop()
    return delimiter.join(map(str, numbers))