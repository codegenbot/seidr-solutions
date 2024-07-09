def swap_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

result = swap_case(input())
print(result)