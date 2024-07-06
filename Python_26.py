from typing import List

def remove_duplicates(input_list: List[str]) -> List[str]:
    seen = set()
    result = []
    for word in input_list:
        if word not in seen:
            seen.add(word)
            result.append(word)
    return result