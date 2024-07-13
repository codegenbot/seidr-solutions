def intersperse(lst):
    result = [lst[0]]
    for item in lst[1:-1]:
        result.extend([lst[0], str(item)])
    result.append(str(lst[-1]))
    return ''.join(map(str, result))

input_list = input("Enter a list of strings (space separated): ").split()
print(intersperse(input_list))