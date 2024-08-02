input_string = str(input("Enter the input string: "))
while len(input_string) % 3 != 0:
    input_string = str(input("Please enter a string that is a multiple of 3 characters long: "))
result = decode_cyclic(input_string)
print(result)