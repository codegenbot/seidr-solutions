from typing import List

def remove_duplicates(numbers: List[int]): 
    return list(dict.fromkeys(numbers))