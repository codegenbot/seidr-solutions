```
def concatenate():
    strings = input("Please enter multiple space-separated strings: ")
    try:
        strings_list = [s for s in strings.split() if s]
        return "".join(strings_list)
    except ValueError as e:
        return str(e)

print(concatenate())