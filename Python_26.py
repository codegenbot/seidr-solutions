```
def remove_duplicates(numbers: list[int]) -> list[int]:
    if not numbers:
        return []
    
    seen = set()
    unique_list = []
    
    for num in sorted(set(numbers)):
        if num not in seen:
            unique_list.append(num)
            seen.add(num)
            
    return unique_list