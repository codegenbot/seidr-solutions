input_string = input("Enter a string: ")
result = [input_string[:i+1] for i in range(len(input_string))]
print(result)