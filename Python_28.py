num_strings = int(input("Enter the number of strings: "))
strings_list = []
for _ in range(num_strings):
    strings = input("Enter a string: ")
    reversed_string = strings[::-1]
    strings_list.append(reversed_string)
print(strings_list)