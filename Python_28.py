def concatenate_strings(strings):
    return "".join(strings)

if sys.version_info[0] < 3:
    strings = raw_input("Enter strings separated by spaces: ").split()
else:
    strings = input("Enter strings separated by spaces: ").split()

result = concatenate_strings(strings)
print(result)  