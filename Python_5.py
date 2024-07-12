numbers = input("Enter numbers separated by space: ").replace(" ", "")
delimiter = input("Enter delimiter: ")
result = delimiter.join(numbers)
print(result)