from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


def main():
    strings = []
    
    while True:
        user_input = input("Enter a string (or 'stop' to stop): ")
        
        if user_input.lower() == 'stop':
            break
        
        strings.append(user_input)
    
    longest_str = longest(strings)
    
    print(f"The longest string is: {longest_str}")


if __name__ == "__main__":
    main()