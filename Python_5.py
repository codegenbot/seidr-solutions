def intersperse(lst):
    result = [lst[0]]
    for item in lst[1:]:
        result.append(' ' + item)
        if item != lst[-2]:
            result.append(' ')
    result.append(lst[-1])
    return ''.join(result)

print(intersperse(input("Enter a list of strings (space separated): ").split()))