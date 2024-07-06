strings = input("Please enter a list of strings (separated by any character): ")
strings = [i for i in re.split("([^\w\s]+)", strings) if i]
print(concatenate(strings))