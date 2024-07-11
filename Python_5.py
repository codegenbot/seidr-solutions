# Fix to read input as integer numbers
numbers = list(map(int, input().split()))
delimiter = input()
print(complete_code(numbers, delimiter))