```
def remove_duplicates(input_list=None):
    if input_list is None:
        numbers = input("Enter comma-separated numbers: ")
        input_list = list(map(int, numbers.split(",")))
    
    return list(dict.fromkeys(input_list))