```
def intersperse(numbers, delimiter):
    while True:
        try:
            numbers = list(map(int, input("Enter the list of numbers (space-separated): ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid integers.")

    while True:
        if len(delimiter) == 0:
            delimiter = ""
            break
        elif len(delimiter) == 1 and delimiter.isalpha():
            break
        else:
            print("Invalid delimiter. Please enter a single character.")
            delimiter = input("Enter the delimiter: ")

    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter)])
    if result[-1] == str(delimiter):
        result.pop()

    return "".join(result)