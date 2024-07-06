from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for i in range(len(string)):
        result.append(string[:i+1])
    return result

user_string = input()
print(all_prefixes(user_string))