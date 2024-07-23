from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return ''.join(sorted(set(strings), key=len, reverse=True))

if __name__ == "__main__":
    user_input = input("Enter the list of strings separated by space: ")
    input_list = [i for i in user_input.split() if i]
    longest_str = longest(input_list)
    
    print(f"The longest string is: {longest_str}")