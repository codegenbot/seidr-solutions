def concatenate():
    num_strings = int(input("Enter the number of strings: "))
    result = ""
    for _ in range(num_strings):
        string = input("Enter a string: ")
        result += string
    return result