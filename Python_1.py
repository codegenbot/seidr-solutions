```
def balance_groups(input_str):
    result = []
    current_group = ''
    is_opening = True
    for char in input_str:
        if char == '(':
            if not is_opening:
                result.append(current_group)
                current_group = ''
                is_opening = True
        elif char == ')':
            if is_opening:
                is_opening = False
            else:
                current_group += char
        else:
            if not is_opening:
                current_group += ' ' + char
            else:
                current_group += char
    result.append(current_group)
    return result

input_str = input("Enter the string: ")
print(balance_groups(input_str))