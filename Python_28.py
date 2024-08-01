```
def concatenate_strings():
    strings = input("Enter a list of strings (separated by spaces): ")
    strings_list = strings.split()
    result = concatenate(strings_list)
    print(result)