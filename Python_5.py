numbers = []
delimiter = ''

try:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    delimiter = input("Enter delimiter: ")

    result = delimiter.join(map(str, numbers))
    print(result)

except:
    print("Invalid input. Please enter numbers separated by space followed by a delimiter.")