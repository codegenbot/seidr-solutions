```
def intersperse(numbers, delimiter):
    numbers_input = input("Enter the list of numbers (space-separated): ")
    while True:
        try:
            numbers = [int(i) for i in numbers_input.split()]
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")
            numbers_input = input("Enter the list of numbers (space-separated): ")

    if len(delimiter) == 0:
        delimiter_str = ""
    else:
        while True:
            if len(delimiter) == 1 and delimiter.isalpha():
                delimiter_str = str(delimiter)
                break
            else:
                print("Invalid delimiter. Please enter a single character.")
                delimiter = input("Enter the delimiter: ")

    result = [str(delimiter_str)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter_str)])
    if result[-1] == str(delimiter_str):
        result.pop()

    return "".join(result)