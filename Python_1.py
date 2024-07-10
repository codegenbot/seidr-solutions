from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    open_count = 0
    
    for char in paren_string:
        if char == "(":
            open_count += 1
    
        current_group += char
        
        if char == ")" and open_count > 0:
            open_count -= 1
    
        if open_count == 0:
            result.append(current_group)
            current_group = ""
            
    return result

# Receive input from the user
input_string = input("Enter the string with parentheses: ")

# Call the function with the input string and print the result
print(separate_paren_groups(input_string))