from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

if __name__ == '__main__':
    user_input = input()
    strings = user_input.split()  
    print(concatenate(strings))
    
print(concatenate(['hello', 'world']))