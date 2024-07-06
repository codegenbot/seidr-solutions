```
def intersperse(lst, delimiter):
    result = [delimiter]
    for item in lst:
        result.extend([item, delimiter])
    result.pop()
    return result

input_numbers = input("Enter a list of integers separated by commas: ")
numbers = [int(num) for num in input_numbers.split(",")]

while True:
    try:
        delimiter = int(input("Enter an integer to use as the delimiter: "))
        break
    except ValueError:
        print("Error: Invalid input for delimiter. Please try again.")

output = intersperse(numbers, delimiter)
print(", ".join(map(str, output)))