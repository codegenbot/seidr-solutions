```
from typing import List

def concatenate(strings: List[str]) -> str:
    input_list = input("Enter a list of strings separated by comma (,), or press Enter to finish: ")
    
    if input_list:  
        input_list += ","  
    
    strings = [s.strip() for s in input_list.split(",") if s]
    
    return "".join(strings)

print(concatenate([]))