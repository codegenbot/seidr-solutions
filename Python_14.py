from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

if __name__ == "__main__":
    input_string = str(input("Enter a string: ")).strip()
    result = all_prefixes(input_string)
    print(result)