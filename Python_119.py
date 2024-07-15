while True:
    try:
        input_list = input("Enter a list of strings separated by commas: ").split(",")
        break
    except ValueError:
        print("Invalid input. Please enter a comma-separated list of strings.")
def match_parens(lst):
    for s in lst:
        count = 0
        for char in s:
            if char == '(':
                count += 1
            elif char == ')':
                if count == 0:
                    return "No"
                else:
                    count -= 1
        if count > 0:
            return "No"
    return "Yes"

print(match_parens(input_list))