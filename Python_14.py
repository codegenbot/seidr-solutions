from typing import List

def all_prefixes() -> List[str]:
    string = input().strip()
    result = [""]
    for i in range(len(string)):
        result.append(string[:i+1])
    return result

print(all_prefixes())