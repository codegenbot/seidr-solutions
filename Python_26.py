def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = str(input_str)
    
    if "," in numbers:
        return list(dict.fromkeys(map(int, numbers.split(","))))
    elif "[" == numbers[0] and "]" == numbers[-1]:
        numbers = numbers[1:-1]
        
        numbers = numbers.replace(" ", "").split(",")
        
        return list(dict.fromkeys(map(int, numbers)))
    else:
        return [int(x) for x in set(str(x)) if str.isdigit(x)]