```
def intersperse(lst, sep):
    result = []
    for item in lst:
        if item != sep:
            result.append(item)
        else:
            result.append(str(len(result)) + " times the delimiter")
    return ', '.join(map(str, result))

input_numbers = input("Enter a list of integers separated by commas: ")
numbers = [int(num) for num in input_numbers.split(",")]

while True:
    try:
        delimiter = int(input("Enter an integer to use as the delimiter: "))
        break
    except ValueError:
        print("Error: Invalid input for delimiter. Please try again.")

output = intersperse(numbers, delimiter)
print(output)