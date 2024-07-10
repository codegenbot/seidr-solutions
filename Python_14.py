from typing import List

def all_prefixes() -> List[str]:
    s = input("Please enter a string: ")
    if not s:
        print("Error: Please provide valid input.")
        return None
    else:
        return [s[:i+1] for i in range(len(s)+1)]

if __name__ == "__main__":
    result = all_prefixes()
    print(result)