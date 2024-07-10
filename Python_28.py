from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    try:
        result = ', '.join([s for s in map(str, strings) if isinstance(s, str)])
    except Exception as e:
        print(f"Error: {e}")
        result = "Invalid input"
    return result

print(concatenate(['hello', 'world']))